#!/bin/bash

	if [ $1 -lt 1 -o $1 -gt 100 ] ; then
	echo "Get Out Of Here"
	exit 1
else
	num=$1	
fi

sqrt1=`echo "sqrt($num)" | bc -lq`
 for i in `seq 2 $sqrt1 `; do
 	 if [ `echo $(($num%$i))` -eq 0 ]; then
 	 	 echo "$num is not a prime no."
 	 	exit 1
 	 fi

done
	echo "$num is a prime no."
	 	 	 




