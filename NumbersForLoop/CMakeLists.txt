cmake_minimum_required(VERSION 3.16)

project(NumbersForLoop LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(NumbersForLoop main.cpp)

include(GNUInstallDirs)
install(TARGETS NumbersForLoop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
