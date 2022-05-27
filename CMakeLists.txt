cmake_minimum_required(VERSION 3.0.2)
project(json_tutorial)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

find_package(nlohmann_json)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES json_tuturial
#  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)


# catkin_install_python(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables for installation
## See http://docs.ros.org/melodic/api/catkin/html/howto/format1/building_executables.html
# install(TARGETS ${PROJECT_NAME}_node
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark libraries for installation
## See http://docs.ros.org/melodic/api/catkin/html/howto/format1/building_libraries.html
# install(TARGETS ${PROJECT_NAME}
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )


add_executable(json_test src/json_test.cpp)
target_link_libraries(json_test ${catkin_LIBRARIES})
target_link_libraries(json_test ${nlohmann_json_LIBRARIES})

add_executable(json_convert_string src/json_convert_string.cpp)
target_link_libraries(json_convert_string ${catkin_LIBRARIES})
target_link_libraries(json_convert_string ${nlohmann_json_LIBRARIES})

add_executable(json_read src/json_read.cpp)
target_link_libraries(json_read ${catkin_LIBRARIES})
target_link_libraries(json_read ${nlohmann_json_LIBRARIES})