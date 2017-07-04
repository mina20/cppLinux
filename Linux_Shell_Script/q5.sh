#!/bin/sh

read a b
tmp=""
if [ $a -lt $b ]; then
	for i in `seq $a $b`; do
		temp=$(( i*i ))
		tmp="$tmp \n $temp"
	done
fi
echo $tmp > tmp
echo "plot \"tmp\" with line linewidth 3" > gnu
echo "pause -1" >> gnu
gnuplot gnu
