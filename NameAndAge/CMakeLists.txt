cmake_minimum_required(VERSION 3.16)

project(NameAndAge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(NameAndAge main.cpp)

include(GNUInstallDirs)
install(TARGETS NameAndAge
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
