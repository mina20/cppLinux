#!/bin/bash

var=$1
echo "enter a number"
read number
var=number
if [ $var -lt 1 ] -o [ $var -gt 100 ];then
     
      echo "Error! please enter valid number"
i=2
while [ $i -lt $var ]
      do
      if [ `expr $num % $i` -eq 0]
      then
      echo "$var is not prime number "
      exit
fi
  i=`expr $i +1`
done
echo "$var is a prime number"   
   
#     if [ $var]
#     echo "$var/"
#     echo "number is prime"
        


