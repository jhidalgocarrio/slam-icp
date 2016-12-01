#rock_library(icp
#    SOURCES Dummy.cpp
#    HEADERS Dummy.hpp)

#rock_executable(icp_bin Main.cpp
#    DEPS_PKGCONFIG eigen3 pcl_registration-1.7 pcl_filters-1.7 pcl_kdtree-1.7 pcl_visualization-1.7)

find_package(PCL 1.4 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (pairwise_incremental_registration Main.cpp)
target_link_libraries (pairwise_incremental_registration ${PCL_LIBRARIES})

