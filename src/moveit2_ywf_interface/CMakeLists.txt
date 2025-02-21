cmake_minimum_required(VERSION 3.8)
project(moveit2_ywf_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_BUILD_TYPE debug) #debug mode

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(moveit_msgs REQUIRED)

find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(moveit_ywf_msg REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


## 添加源文件，生成库
#add_library(ywf_moveit_interface_lib SHARED
#        include/moveit2_ywf_interface/ywf_moveit_interface.hpp
#        src/ywf_moveit_interface.cpp
#        )

## 添加头文件地址
#target_include_directories(ywf_moveit_interface_lib PUBLIC
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#        $<INSTALL_INTERFACE:include>
#        )

## 用于代替传统的target_link_libraries
#ament_target_dependencies(ywf_moveit_interface_lib
#        PUBLIC
#        "moveit_ros_planning_interface"
#        "moveit_visual_tools"
#        "moveit_msgs"
#        "rclcpp"
#        )

## 为了使下游文件可以访问
#ament_export_targets(ywf_moveit_interface_lib HAS_LIBRARY_TARGET)
#ament_export_dependencies(
#        rclcpp
#)

# 注册 导出头文件
#install(
#        DIRECTORY include/
#        DESTINATION include
#)
# 注册 导出库文件
#install(
#        TARGETS ywf_moveit_interface_lib # 告诉ros2有这么个目标（可执行文件或者库）
#        EXPORT ywf_moveit_interface_lib
#        ARCHIVE DESTINATION lib
#        LIBRARY DESTINATION lib
#        RUNTIME DESTINATION bin
#        INCLUDES DESTINATION include
#)


add_executable(main_moveit2_ywf_interf 
        src/main_moveit2_ywf_interf.cpp
        include/moveit2_ywf_interface/ywf_moveit_interface.hpp)

target_include_directories(main_moveit2_ywf_interf PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)


target_compile_features(main_moveit2_ywf_interf PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17


ament_target_dependencies(
  main_moveit2_ywf_interf
  "moveit_ros_planning_interface"
  "moveit_visual_tools"
  "moveit_msgs"
  "rclcpp"
  "moveit_ywf_msg"
  "rclcpp_action"
  "rclcpp_components"
)

add_executable(test_moveit2 
        src/test_moveit2.cpp
        include/moveit2_ywf_interface/ywf_moveit_interface.hpp
       )        

target_include_directories(test_moveit2 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_features(test_moveit2 PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17


ament_target_dependencies(
  test_moveit2
  "moveit_ros_planning_interface"
  "moveit_visual_tools"
  "moveit_msgs"
  "rclcpp"
  "moveit_ywf_msg"
  "rclcpp_action"
  "rclcpp_components"
)



#Install lib files
install(TARGETS main_moveit2_ywf_interf
  DESTINATION lib/${PROJECT_NAME}
  )

#Install lib files
install(TARGETS test_moveit2
  DESTINATION lib/${PROJECT_NAME}
  )

  
 # Install launch files.
install(DIRECTORY
        launch
        DESTINATION share/${PROJECT_NAME}/
) 


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
