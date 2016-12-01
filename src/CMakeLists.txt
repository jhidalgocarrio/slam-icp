rock_library(icp
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(icp_bin Main.cpp
    DEPS icp)

