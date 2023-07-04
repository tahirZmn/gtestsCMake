cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD_REQUIRED ON)                       
set(CMAKE_CXX_STANDARD 11)
cmake_policy(SET CMP0091 NEW)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION  "Implementing gtests on classic problems"
         LANGUAGES CXX)

add_subdirectory(GoogleTest)
include_directories(${gtest_SOURCE_DIR}/include)

add_executable(my_tests test/tests.cpp src/classic.cpp src/strings.cpp)  
target_link_libraries(my_tests PRIVATE gtest_main)
target_include_directories(my_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)  # Add this line

add_executable(HelloAppBinary 
                main.cpp 
                src/classic.cpp 
                src/strings.cpp 
                ) 

target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)            
target_link_libraries(HelloAppBinary PUBLIC  gtest_main)       