#!/bin/bash

# This is my first and worst script!

for a in 01 02 03 04 05 06 07 08 09 `seq 10 15`;do 
	echo "Creating a directory named cms15$a"	
	mkdir cms15$a; 
	echo cms15$a > cms15$a/cms15$a.txt ; 
done
echo ":Everything done!gudbye!"
