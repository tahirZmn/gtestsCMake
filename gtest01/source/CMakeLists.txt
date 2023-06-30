
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

add_executable(my_tests test/test_example.cpp)  
target_link_libraries(my_tests PRIVATE gtest_main)



# TARGET _ 1 
add_library(operations STATIC src/operations.cpp)                                     #creating a static library from operations.cpp file. name of the library: operations
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)     #providing the address of the header files to be included


#TARGET _ 2
add_library(logger STATIC logger/src/log.cpp)                                         #creating a static library -> logger
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)  # including heading files for this library


#TARGET _ 3
add_executable(HelloAppBinary 
                main.cpp 
                src/dog.cpp 
                )
                
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations logger gtest_main)             #including the libraries ->HelloAppBinary will 
                                                                                      #PUBLICALLY depend on operations and logger libraries. (DEPENDENCIES)


