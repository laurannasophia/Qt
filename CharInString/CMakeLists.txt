cmake_minimum_required(VERSION 3.16)

project(CharInString LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CharInString main.cpp)

include(GNUInstallDirs)
install(TARGETS CharInString
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
