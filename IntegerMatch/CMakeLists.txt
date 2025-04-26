cmake_minimum_required(VERSION 3.16)

project(IntegerMatch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(IntegerMatch main.cpp)

include(GNUInstallDirs)
install(TARGETS IntegerMatch
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
