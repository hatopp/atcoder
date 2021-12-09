#!/bin/bash
read -p "input abc " num
read -p "dif " dif
acc new -f abc${num}
cd abc${num}
cd ${dif}
code main.cpp

