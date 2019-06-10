cmake_minimum_required(VERSION 3.13)
project(Struktury)

set(CMAKE_CXX_STANDARD 14)

add_executable(Struktury  BST.cpp List.cpp Node.cpp PriorityQueue.cpp Queue.cpp
        Stack.cpp Stack.h Queue.h PriorityQueue.h Node.h List.h BST.h Graph.cpp Graph.h Calculator.cpp Calculator.h)