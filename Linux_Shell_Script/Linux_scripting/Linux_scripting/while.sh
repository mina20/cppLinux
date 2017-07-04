#!/bin/bash

#ounter=0
#hile [ $counter -le 10 ] ; do
#echo "$counter is still less than 10"
#counter=echo "$counter+1" | bc -lq
##counter=$(( $counter+1))
#one

###########################################################

#Read a string from user
#If string is not "exit" then go to step 1

#string="string"
#while [ $string != "exit" ] ; do
#	echo "Enter something"
#	read string 
#done

##############################################################

#Take an integer (N) as command line argument
#Make sure that 0<N<100
#Find out if N is PRIME

N=$1
var=2
#if [ 1 -gt $var -a $var -lt 100 ] ; then
	while [ $var = $(( $N-1 )) ] ; do
		if [ echo"$N%$var" = 0 ] ; then
			echo "Number is not prime"
			exit 0
		fi
	var=$(( $var+1 ))
	done
	echo "Number is prime"
#else
#echo "Number is not in the range 1 to 100"
#fi
