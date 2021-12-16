#!/bin/bash
read -p "input abc " num
read -p "dif " dif
if [ -d abc${num} ] ; then
    echo "directory exist. move there."
    cd abc${num}
    acc add --force
else
    echo "not exist. create new directory"
    acc new -f abc${num}
    cd abc${num}
fi

cd ${dif}
open main.cpp

