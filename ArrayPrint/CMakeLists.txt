cmake_minimum_required(VERSION 3.16)

project(ArrayPrint LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ArrayPrint main.cpp)

include(GNUInstallDirs)
install(TARGETS ArrayPrint
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
