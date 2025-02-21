
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, TextSubstitution
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    

    # MoveGroupInterface demo executable
    moveit_config = MoveItConfigsBuilder("moveit_resources_panda").to_moveit_configs()
    move_group_ywf_intf = Node(
        name="moveit2_ywf_interface",
        package="moveit2_ywf_interface",
        executable="main_moveit2_ywf_interf",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
        ],
    )
    
    

    return LaunchDescription([
        
        move_group_ywf_intf,
         
    ])