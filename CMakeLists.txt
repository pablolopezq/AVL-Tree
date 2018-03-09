cmake_minimum_required(VERSION 3.7)
project(ArbolesAVL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Struct.cpp Struct.h Arbol.cpp Arbol.h Archivo.cpp Archivo.h)
add_executable(ArbolesAVL ${SOURCE_FILES})