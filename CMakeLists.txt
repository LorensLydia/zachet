cmake_minimum_required(VERSION 3.10)

project(DividerTest)

set(CMAKE_CXX_STANDARD 11)

# Добавляем исполняемый файл для тестирования
add_executable(DividerTest main.cpp)

# Добавляем библиотеку с классом Divider
add_library(Divider divider.cpp)

# Линковка исполняемого файла с библиотекой Divider
target_link_libraries(DividerTest Divider)
