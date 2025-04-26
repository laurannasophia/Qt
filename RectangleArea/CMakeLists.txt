cmake_minimum_required(VERSION 3.16)

project(RectangleArea LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RectangleArea main.cpp)

include(GNUInstallDirs)
install(TARGETS RectangleArea
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
