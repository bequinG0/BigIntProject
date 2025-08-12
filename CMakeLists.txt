cmake_minimum_required(VERSION 3.10)  
project(BigInt VERSION 1.0)  

# Настройка компилятора  
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)  

# Добавление библиотеки  
add_library(BigInt SHARED src/BigInt.cpp)  

# Подключение заголовков  
target_include_directories(BigInt PUBLIC include)  

# Установка (опционально)  
install(TARGETS BigInt DESTINATION lib)  
install(FILES include/BigInt/BigInt.h DESTINATION include)  
