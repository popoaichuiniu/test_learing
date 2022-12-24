cmake_minimum_required(VERSION 3.23)
project(testinclude)

set(CMAKE_CXX_STANDARD 14)

add_executable(testinclude foo.h foo.cpp foowrapper.h foowrapper.cpp testinclude.cpp)
