cmake_minimum_required(VERSION 3.22)
project(TestProject)

include_directories(
    ./inc
)

set(FUNCTIONSRC "")

aux_source_directory(./Function FUNCTIONSRC)

add_executable(TestProject
    main.cpp
    ${FUNCTIONSRC}
)
