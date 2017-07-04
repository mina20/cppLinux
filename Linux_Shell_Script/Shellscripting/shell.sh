#!/bin/bash

# Demo program to illustrate the variables
#A program by Vaibhav K on 16 feb 2016

#...............................


echo "Enter the command to read"
read var
echo "Enter keyword:"
read var1
var=`man $var | grep  $keyword -i -w  --color | wc -l`
var1=`man $var1 | wc -l`
echo "total $var1 and $keyword " 







