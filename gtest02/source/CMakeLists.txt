cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD_REQUIRED ON)                       
set(CMAKE_CXX_STANDARD 20)
cmake_policy(SET CMP0091 NEW)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION  "The leading Hello World App"
         LANGUAGES CXX)


add_subdirectory(GoogleTest)
include_directories(${gtest_SOURCE_DIR}/include)

add_executable(my_tests test/tests.cpp src/classic.cpp)  
target_link_libraries(my_tests PRIVATE gtest_main)
target_include_directories(my_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)  # Add this line


add_executable(HelloAppBinary 
                main.cpp 
                src/classic.cpp 
                ) 

target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)            
target_link_libraries(HelloAppBinary PUBLIC  gtest_main)       