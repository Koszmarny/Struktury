cmake_minimum_required(VERSION 3.13)
project(Struktury)

set(CMAKE_CXX_STANDARD 14)

add_executable(Struktury Calculator.cpp Calculator.h BST.h BST.cpp Graph.cpp Graph.h List.h List.cpp Node.h Node.cpp
        PriorityQueue.h PriorityQueue.cpp Queue.h Queue.cpp Stack.cpp Stack.h Calculator.cpp Calculator.h)