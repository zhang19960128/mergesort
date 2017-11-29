#!/bin/bash
g++ -std=c++11 mergesort.cpp -o out;
for i in `seq 1 10`
do
	./out
done
