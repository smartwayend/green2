# CMake generated Testfile for 
# Source directory: /home/smartway/ros2_ws/src/navigation2/nav2_dwb_controller/dwb_core/test
# Build directory: /home/smartway/ros2_ws/build/dwb_core/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(utils_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/smartway/ros2_ws/build/dwb_core/test_results/dwb_core/utils_test.gtest.xml" "--package-name" "dwb_core" "--output-file" "/home/smartway/ros2_ws/build/dwb_core/ament_cmake_gtest/utils_test.txt" "--command" "/home/smartway/ros2_ws/build/dwb_core/test/utils_test" "--gtest_output=xml:/home/smartway/ros2_ws/build/dwb_core/test_results/dwb_core/utils_test.gtest.xml")
set_tests_properties(utils_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/smartway/ros2_ws/build/dwb_core/test/utils_test" TIMEOUT "60" WORKING_DIRECTORY "/home/smartway/ros2_ws/build/dwb_core/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/smartway/ros2_ws/src/navigation2/nav2_dwb_controller/dwb_core/test/CMakeLists.txt;1;ament_add_gtest;/home/smartway/ros2_ws/src/navigation2/nav2_dwb_controller/dwb_core/test/CMakeLists.txt;0;")
subdirs("../gtest")
