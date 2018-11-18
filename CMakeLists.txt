cmake_minimum_required(VERSION 3.12)
project(interview)

set(CMAKE_CXX_STANDARD 14)

include_directories("Bit Manipulation")
include_directories(Lists)
include_directories("Stacks And Queues")
include_directories(Test)
include_directories("Trees And Graphs")

add_executable(trees
        "Trees And Graphs/4.7.cpp"
        "Trees And Graphs/4.7.h"
        "Trees And Graphs/BinaryNode.cpp"
        "Trees And Graphs/BinaryNode.h"
        "Trees And Graphs/Trees And Graphs.cpp")

add_executable(bits
        "Bit Manipulation/5.1.cpp"
        "Bit Manipulation/5.1.h"
        "Bit Manipulation/5.2.cpp"
        "Bit Manipulation/5.2.h"
        "Bit Manipulation/Bit Manipulation.cpp"
        "Bit Manipulation/print.cpp"
        "Bit Manipulation/print.h"
        )

add_executable(lists
        Lists/2.1.cpp
        Lists/2.1.h
        Lists/2.2.cpp
        Lists/2.2.h
        Lists/2.3.cpp
        Lists/2.3.h
        "Lists/Chapter 2.cpp"
        Lists/LinkedList.cpp
        Lists/LinkedList.h
        Lists/Node.h
        )

add_executable(stacks
        "Stacks And Queues/3.1.cpp"
        "Stacks And Queues/3.1.h"
        "Stacks And Queues/3.2.cpp"
        "Stacks And Queues/3.2.h"
        "Stacks And Queues/Stacks And Queues.cpp"
        )

add_executable(test
        Test/1.1.c
        Test/1.2.c
        Test/1.3.c
        Test/1.4.c
        Test/1.5.c
        Test/1.6.c
        Test/1.7.c
        Test/1.8.c
        "Test/Chapter 1.cpp"
        )
