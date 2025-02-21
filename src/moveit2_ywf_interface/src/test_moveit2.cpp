
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
//#include "moveit2_ywf_interface/ywf_moveit_interface.hpp"


//
// std::string vectorDoubleToString(const std::vector<double>& vec) {
//     std::ostringstream oss;
//     std::copy(vec.begin(), vec.end(), std::ostream_iterator<double>(oss, " "));
//     return oss.str();
// }

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




int main(int argc, char ** argv)
{
    //std::vector<double>  v_d={0.1,0.2,0.3,0.4};
    //std::string a_str = vectorDoubleToString(v_d);


    // Initialize ROS and create the Node
    rclcpp::init(argc, argv);

    rclcpp::NodeOptions node_options;
    //node_options.automatically_declare_parameters_from_overrides(true);
    //auto node_moveit_intf =std::make_shared<ywf_mov_intf>("ywf_moveit",node_options);
    std::string paramList="0.1,0.2,0.3,0.4,0.5,0.6,0.7";
    //node_moveit_intf->move_joint(paramList);
    std::vector<std::string> aaa={"aa","0.2","0.3","0.4"};
    std::vector<double> ccc;
    auto bbb= stringsToDoubles(aaa,ccc);

    rclcpp::shutdown();

    return 0;
}
