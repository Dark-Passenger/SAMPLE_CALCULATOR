#!/bin/sh

if [ $1 = "make" ]
then

    echo "Building make files";
    cd build;
    cmake ..

    echo "Compiling now ...";
    make;
    echo "All done";
    echo "you will find all your executables and libraries";
    echo "in build/output/";
elif [ $1 = "cmake-clean" ]
then
    echo "cleaning build directory";
    cd build;
    make clean;
    rm -rf *;
    echo "All done";
elif [ $1 = "clean" ]
then
    echo "removing executables and libraries";
    cd build;
    make clean;
else
    echo "no option like $1";
fi
