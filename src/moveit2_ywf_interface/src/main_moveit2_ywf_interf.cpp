#include <rclcpp/rclcpp.hpp>
#include "stdlib.h"
#include "moveit2_ywf_interface/ywf_moveit_interface.hpp"
#include <sstream>
#include <string>


auto const loggerTest = rclcpp::get_logger("main_moveit2_ywf_interf");

int main(int argc, char ** argv)
{
  // Initialize ROS and create the Node
  rclcpp::init(argc, argv);
  // Create a ROS logger
  auto const logger = rclcpp::get_logger("main_moveit2_ywf_interf");
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto node_moveit_intf =std::make_shared<ywf_mov_intf>("ywf_moveit",node_options);
  //shared_ptr<rclcpp::Node> type trans from node_moveit_intf
  std::shared_ptr<rclcpp::Node> node_moveit_base = std::static_pointer_cast<rclcpp::Node>(node_moveit_intf);
  node_moveit_intf->set_node_sharedPtr(node_moveit_base);
  //start spin thread 
  // rclcpp::executors::SingleThreadedExecutor executor;
  // executor.add_node(node_moveit_intf);
  // std::thread([&executor]() { executor.spin(); }).detach();
  // node_moveit_intf->config();
  
  rclcpp::spin(node_moveit_intf);

  //node_moveit_intf->movePose(&tool_pose);

  rclcpp::shutdown();
  
  return 0;
}
