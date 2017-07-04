#!/bin/sh

echo Enter the range
read a b

if [ $a -gt $b ]; then
	echo $a is greater than $b
else
	for var in `seq $a $b`; do
		sed "s/N/$var/g" hello_world.c > tmp.c
		gcc tmp.c -o tmp
		./tmp
	done
fi
rm -rf tmp.c tmp
