
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_msgs/msg/attached_collision_object.hpp>
#include <moveit_msgs/msg/collision_object.hpp>
#include "geometry_msgs/msg/pose.hpp"

#include <chrono>
#include <functional>
#include <string>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include "stdlib.h"
#include <regex>

#include <iostream>
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "moveit_ywf_msg/action/moveit_ywf_intf.hpp"


#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
//#include <double.h>
//#include <cstdlib>

using namespace std;
namespace rvt = rviz_visual_tools;


// Create custom split() function.
void customSplit(string str, char separator, vector<string> &output)
{
    int startIndex = 0, endIndex = 0;
    for (int i = 0; i <= str.size(); i++)
    {
        // If we reached the end of the word or the end of the input.
        if (str[i] == separator || i == str.size())
        {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            output.push_back(temp);
            startIndex = endIndex + 1;
        }
    }
}


bool stringsToDoubles(const std::vector<std::string>& strs,std::vector<double>& out_vect ) {
    
    //doubles.reserve(strs.size());
    
    try
    {
        /* code */
        std::transform(strs.begin(), strs.end(), std::back_inserter(out_vect), [](const std::string& str) {
            char* end = nullptr;
            double val = std::strtod(str.c_str(), &end);
            if (end == str.c_str() + str.size()) {
                return val;
            } else {
                // 可以选择抛出异常或者返回一个默认值，比如0.0
                throw "不能转换为双精度浮点数！";
                //return 0.0;
            }
        });
    }
    catch(const char* err)
    {
        std::cerr << err << '\n';
        return false;
    }
    
    return true;
}

enum err_code_moveit{
        no_define,           //未定义
        success,             //成功
        config_fail,         //初始化失败
        find_func_fail,      //未找到指令
        joint_trans_fail,    //关节角转换失败
        joint_plan_fail,     //关节运动轨迹规划失败
        joint_move_fail,     //关节角度运动失败
        joint_outBound_fail,  //关节超出限制角度
        pos_trans_fail,      //位置转换失败
        pos_plan_fail,       //位置轨迹规划失败
        pos_move_fail,        //位置运动失败
        
    };

//函数返回 结构体
struct fun_rebackMes
{
        err_code_moveit code;
        string mes;
        fun_rebackMes(err_code_moveit err_code,string param_mes):code(err_code), mes(param_mes)
        {}
};

//
std::string vectorDoubleToString(const std::vector<double>& vec) {
    std::ostringstream oss;
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<double>(oss, ","));
    string reback_str = oss.str();
    return reback_str;
}


class ywf_mov_intf : public rclcpp::Node
{
    public:

        using MoveitYwfIntf = moveit_ywf_msg::action::MoveitYwfIntf;
        using GoalHandleMoveitYwfIntf=rclcpp_action::ServerGoalHandle<MoveitYwfIntf>;
        
        //construction 
        explicit ywf_mov_intf(std::string node_name,rclcpp::NodeOptions options):Node(node_name,options)
        {
            using namespace std::placeholders;

            RCLCPP_INFO(this->get_logger(),"ywf_mov_intf_CLASS");
            //order implement server
            this->action_server_ = rclcpp_action::create_server<MoveitYwfIntf>(
                this->get_node_base_interface(),
                this->get_node_clock_interface(),
                this->get_node_logging_interface(),
                this->get_node_waitables_interface(),
                "MoveitYwfIntf",
                std::bind(&ywf_mov_intf::handle_goal, this, _1, _2),
                std::bind(&ywf_mov_intf::handle_cancel, this, _1),
                std::bind(&ywf_mov_intf::handle_accepted, this, _1)); 
        }
        
        //first step is set rclcpp::Node shared_ptr for moveit parts 
        bool set_node_sharedPtr(shared_ptr<rclcpp::Node> node)
        {
            node_self=node;
        }
       
        //second step is configure the moveit parts
        bool config()
        {
            try
            {
                //create move group interface
                PLANNING_GROUP = "panda_arm";
                move_group_ptr=
                    std::make_shared<moveit::planning_interface::MoveGroupInterface>(node_self,PLANNING_GROUP);
                    
                //Raw pointers JointModelGroup
                //const moveit::core::JointModelGroup* joint_model_group =
                //        move_group_ptr->getCurrentState()->getJointModelGroup(PLANNING_GROUP);
                //joint_model_group_ptr = 
                joint_model_group_ptr= move_group_ptr->getCurrentState()->getJointModelGroup(PLANNING_GROUP);
                // Visualization
                visual_tools_ptr=std::make_shared<moveit_visual_tools::MoveItVisualTools>(node_self, "panda_link0", "move_group_tutorial",
                                                        move_group_ptr->getRobotModel());     
                return true;             
            }
            catch(...)
            {
                std::cerr << "Caught an unknown exception!" << std::endl;
                return false;
            }                   
        }

        /**********moveit2 implement command************* */
        /*
        function return error code define:
        0,fail,none message
        1,success
        2,fail,cartesian pos trans failed
        */
        
        //设置速度
        fun_rebackMes speed(string paramList)
        {
            move_group_ptr->setMaxVelocityScalingFactor(0.05);
            move_group_ptr->setMaxAccelerationScalingFactor(0.05);
            return fun_rebackMes(err_code_moveit::success,"");
        }


        //获取当前关节角度
        fun_rebackMes get_current_joint_angles(string paramList)
        {
            moveit::core::RobotStatePtr current_state = move_group_ptr->getCurrentState(1);
            std::vector<double> joint_group_positions;
            current_state->copyJointGroupPositions(joint_model_group_ptr, joint_group_positions);
            string jointAngle = vectorDoubleToString(joint_group_positions);
            return fun_rebackMes(err_code_moveit::success,jointAngle);
        }


        //move joint 
        fun_rebackMes move_joint(string paramList)
        {
            //analysis paramList to double array
            //角度单位 弧度 rad
            vector<string> param_vec;
            customSplit(paramList,',',param_vec);  //字符串转换为vector
            int num=param_vec.size();
            //角度数组 转换为 角度矢量
            std::vector<double> joint_group_position;
            auto trans_result = stringsToDoubles(param_vec,joint_group_position);
            if(!trans_result)
            {
                //返回转换失败
                return fun_rebackMes(err_code_moveit::joint_trans_fail,"关节角度参数转换失败！");
            }
            //在范围内
            bool within_bounds = move_group_ptr->setJointValueTarget(joint_group_position);
            if (!within_bounds)
            {
                //RCLCPP_WARN(LOGGER, "Target joint position(s) were outside of limits, but we will plan and clamp to the limits ");
                return fun_rebackMes(err_code_moveit::joint_outBound_fail,"关节运动，角度超出限制值！");
            }
            //create the trajactory
            moveit::planning_interface::MoveGroupInterface::Plan my_plan;
            bool success = (move_group_ptr->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
            
            if(success)
            {
                auto err_code = move_group_ptr->move(); 
                if(err_code==moveit_msgs::msg::MoveItErrorCodes::SUCCESS)
                {
                    return fun_rebackMes(err_code_moveit::success,"");

                }
                else
                {
                    return fun_rebackMes(err_code_moveit::joint_move_fail,"moveJoint轨迹执行失败！");
                }
            }
            else
            {
                
                return fun_rebackMes(err_code_moveit::joint_plan_fail,"moveJoint轨迹规划失败！");
            }

        }
        

        //move pose
        fun_rebackMes move_pose(string paramList)
        {
            //analysis paramList to double array
            double cartesian_pos[6]={0.0,0.0,0.0,0.0,0.0,0.0};
            int res_trans = paramTranstoPos(paramList,&cartesian_pos);
            //if cartesian pos trans failed when return result fail
            if(res_trans!=1)
            {
                return fun_rebackMes(err_code_moveit::pos_trans_fail,"movePose参数转换失败");
            }

            //translation
            geometry_msgs::msg::Pose ros2_pose;
            ros2_pose.position.x = cartesian_pos[0];
            ros2_pose.position.y = cartesian_pos[1];
            ros2_pose.position.z = cartesian_pos[2];
            //Quataternion
            tf2::Quaternion quat;
            quat.setRPY(cartesian_pos[3], cartesian_pos[4], cartesian_pos[5]);
            ros2_pose.orientation.x = quat.getX();
            ros2_pose.orientation.y = quat.getY();
            ros2_pose.orientation.z = quat.getZ();
            ros2_pose.orientation.w = quat.getW();
            //set move group pose
            move_group_ptr->setPoseTarget(ros2_pose);
            //create the trajactory
            moveit::planning_interface::MoveGroupInterface::Plan my_plan;
            bool success = (move_group_ptr->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
            if(success)
            {
                auto err_code = move_group_ptr->move(); 
                if(err_code==moveit_msgs::msg::MoveItErrorCodes::SUCCESS)
                {
                    //cartesian position move success return 1
                    return fun_rebackMes(err_code_moveit::success,"");
                }
                else
                {
                    return fun_rebackMes(err_code_moveit::pos_move_fail,"movePose执行失败！");
                }
            }
            else
            {
                
                return fun_rebackMes(err_code_moveit::pos_plan_fail,"movePose轨迹规划失败");
            }
        }    



    private:
        /*error_code*/
        
        int paramTranstoPos(std::string pos,double (*tool_pose)[6])
        {            
            
            std::regex pattern("[\\d.\\-,]*"); //参数模式应该是所有参数都是数字
            std::smatch para_match;
            if(std::regex_match(pos,para_match,pattern)){
                std::smatch data_match;
                std::regex search_para(",");//分隔符
                std::regex_token_iterator iter_data(pos.begin(),pos.end(),search_para,-1);
                decltype(iter_data) end;
                int count = 0;
                for(;iter_data != end;iter_data++){
                    count++;
                    std::cout << iter_data->str() << std::endl;
                }
                if(count != 6){
                    std::cout << "指令错误:笛卡尔位置参数为6个,参数输入个数请确认" << std::endl;
                    return 0;
                }
                //iter_data reset
                iter_data = std::regex_token_iterator(pos.begin(),pos.end(),search_para,-1);

                (*tool_pose)[0] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[1] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[2] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[3] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[4] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[5] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
            
            }else{
                std::cout << "指令错误：笛卡尔点位输入参数规则为第一个为存储序号，后续为笛卡尔位置信息，以逗号隔开，不能出现空格" << std::endl;
                return 0;
            }
            return 1;
        }

        int paramTranstoJoint(std::string pos,double (*tool_pose)[7])
        {            
            
            std::regex pattern("[\\d.\\-,]*"); //参数模式应该是所有参数都是数字
            std::smatch para_match;
            if(std::regex_match(pos,para_match,pattern)){
                std::smatch data_match;
                std::regex search_para(",");//分隔符
                std::regex_token_iterator iter_data(pos.begin(),pos.end(),search_para,-1);
                decltype(iter_data) end;
                int count = 0;
                for(;iter_data != end;iter_data++){
                    count++;
                    std::cout << iter_data->str() << std::endl;
                }
                if(count != 6){
                    std::cout << "指令错误:笛卡尔位置参数为6个,参数输入个数请确认" << std::endl;
                    return 0;
                }
                //iter_data reset
                iter_data = std::regex_token_iterator(pos.begin(),pos.end(),search_para,-1);

                (*tool_pose)[0] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[1] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[2] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[3] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[4] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
                iter_data++;
                (*tool_pose)[5] = atof(iter_data->str().c_str());
                std::cout << iter_data->str().c_str() << std::endl;
            
            }else{
                std::cout << "指令错误：笛卡尔点位输入参数规则为第一个为存储序号，后续为笛卡尔位置信息，以逗号隔开，不能出现空格" << std::endl;
                return 0;
            }
            return 1;
        }


        

        /*********action server****************** */
        //recieved goal
        rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const MoveitYwfIntf::Goal> goal)
        {
            RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->order);
            (void)uuid;
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }
        
        
        //cancel goal
        rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleMoveitYwfIntf> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
            (void)goal_handle;
            //Todo 增加代码，当接收到取消命令，需要向moveit api发送取消动作
            return rclcpp_action::CancelResponse::ACCEPT;
        }


        //execute the main 
        void handle_accepted(const std::shared_ptr<GoalHandleMoveitYwfIntf> goal_handle)
        {
            using namespace std::placeholders;
            // this needs to return quickly to avoid blocking the executor, so spin up a new thread
            std::thread{std::bind(&ywf_mov_intf::execute, this, _1), goal_handle}.detach();

        }


        //analysis order string for calling function
        void execute(const std::shared_ptr<GoalHandleMoveitYwfIntf> goalHandle)
        {
            const auto goal = goalHandle->get_goal();  
            
            auto feedback = std::make_shared<MoveitYwfIntf::Feedback>();
            auto result = std::make_shared<MoveitYwfIntf::Result>();
            string order_implement = goal->order;
            std::regex func_reg("([A-Z|a-z|_]+)[(](.*)[)]");//函数名的输入模式应该是字母函数名后跟()，圆括号中有所有输入参数
            std::smatch func_match;
            if(std::regex_match(order_implement,func_match,func_reg)){
                //std::cout << "收到ROS指令: " <<  req->cmd_str.data() <<std::endl;
                std::string func_name = func_match[1];
                std::string para_list = func_match[2];
                //std::regex para_pattern("[A-Z|a-z|\\.\\d|\\d|,|-]*");//校验参数的内容，参数部分必须是字母，数字和逗号，负号组成，出现其他字符包括空格都会导致校验失败,
                std::regex para_pattern("[A-Za-z\\d.\\-,]*");//校验参数的内容，参数部分必须是字母，数字和逗号，负号组成，出现其他字符包括空格都会导致校验失败,
                if(std::regex_match(para_list,para_pattern))
                {//检查参数输入是否合法
                    if(func_name == "config")
                    {
                        if(!config())
                        {
                            result->result=std::to_string(static_cast<int>(err_code_moveit::config_fail))+":"+
                                    "moveit2 config 失败！";
                            goalHandle->succeed(result); //回馈失败结果
                        }
                        else
                        {
                            result->result=std::to_string(static_cast<int>(err_code_moveit::success))+":"+"";
                            goalHandle->succeed(result);  //回馈结果
                        }
                    }
                    else
                    {
                        _selectfunc(func_name);
                        if(funcP == NULL)
                        {
                            std::cout << "指令错误: 找不到该指令对应的函数" << std::endl;
                            
                            result->result=
                                std::to_string(static_cast<int>(err_code_moveit::find_func_fail))+":"+
                                    "找不到指令function，检查指令是否正确";
                            goalHandle->succeed(result); //回馈失败结果
                        }
                        else
                        {
                            fun_rebackMes backMes = (this->*(ywf_mov_intf::funcP))(para_list);
                            //Todo 信息的反馈
                            string result_mes=std::to_string(static_cast<int>(backMes.code))+":"+backMes.mes;
                            result->result=result_mes;
                            goalHandle->succeed(result);  //回馈结果
                        }
                    }
                }
                else
                {
                    std::cout << "指令错误:函数参数输入不合法，参数列表由字母，数字和逗号组成，不能有空格出现" <<std::endl;
                    result->result="fail,指令错误:函数参数输入不合法，参数列表由字母，数字和逗号组成，不能有空格出现";
                    goalHandle->succeed(result); //回馈失败结果
                }
            }
            else
            {
                std::cout << "指令错误:函数输入形式错误，函数输入必须是 [函数名]() 这种输入形式，请重新输入" << std::endl;
                result->result="fail,指令错误:函数参数输入不合法，参数列表由字母，数字和逗号组成，不能有空格出现";
                goalHandle->succeed(result); //回馈失败结果
            }
        }

        //select function reference
        void _selectfunc(std::string func_name)
        {
            if(func_name == "move_pose")
            {
                funcP = &ywf_mov_intf::move_pose;
            }
            else if(func_name == "move_joint")
            {
                funcP = &ywf_mov_intf::move_joint;
            }
            else if(func_name == "speed")
            {
                funcP = &ywf_mov_intf::speed;
            }
            else if(func_name == "get_current_joint_angles")
            {
                funcP = &ywf_mov_intf::get_current_joint_angles;
            }
            else
            {
                funcP = NULL;
            }
        }

        // The
        // :moveit_codedir:`MoveGroupInterface<moveit_ros/planning_interface/move_group_interface/include/moveit/move_group_interface/move_group_interface.h>`
        // class can be easily set up using just the name of the planning group you would like to control and plan for.
        string PLANNING_GROUP;
        shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_ptr;
        
        // We will use the
        // :moveit_codedir:`PlanningSceneInterface<moveit_ros/planning_interface/planning_scene_interface/include/moveit/planning_scene_interface/planning_scene_interface.h>`
        // class to add and remove collision objects in our "virtual world" scene
        shared_ptr<moveit::planning_interface::PlanningSceneInterface> planning_scene_interface_ptr;
        // Raw pointers are frequently used to refer to the planning group for improved performance.
        const moveit::core::JointModelGroup* joint_model_group_ptr;
        // Visualization
        shared_ptr<moveit_visual_tools::MoveItVisualTools> visual_tools_ptr;
        shared_ptr<rclcpp::Node> node_self;
        //moveit action server
        rclcpp_action::Server<MoveitYwfIntf>::SharedPtr action_server_;
        //define function point
        fun_rebackMes (ywf_mov_intf:: *funcP)(std::string para);//函数指针是有作用域的，所以全局函数的指针和类内成员函数的指针定义有很大不同，这里不能用typedef
        
};
      
      