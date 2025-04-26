cmake_minimum_required(VERSION 3.16)

project(CharsInFile LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CharsInFile main.cpp)

include(GNUInstallDirs)
install(TARGETS CharsInFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
