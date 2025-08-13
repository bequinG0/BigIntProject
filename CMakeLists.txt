cmake_minimum_required(VERSION 3.10)  
project(BigInt VERSION 1.0)  
  
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)  

add_library(BigInt SHARED src/BigInt.cpp)  

target_include_directories(BigInt PUBLIC include)  

install(TARGETS BigInt DESTINATION lib)  
install(FILES include/BigInt/BigInt.h DESTINATION include)  
