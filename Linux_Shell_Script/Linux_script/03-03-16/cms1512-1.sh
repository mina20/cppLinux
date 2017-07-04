#!/bin/bash

max="0"
#echo "Enter the character"
#read letters

if [ $# -lt 1 ]; then			# $#-count arguments $*-lists arguments
	echo "No input!"
	exit 1
else
	letters=$*
fi

for var in $letters; do
	mkdir $var
	dot="."
	for num in 3 4 5; do
		mkdir $var/$var$num
		grep ^$var$dot[a-z]$ -i /usr/share/dict/words > $var/$var$num/$var$num.txt 
		words=`cat $var/$var$num/$var$num.txt | wc -w`
		echo $words >> $num.dat
		if [ $words -gt $max ]
                        then
                        max=$words
                        file=$var$num.txt
                fi
		dot=".$dot"
	done
done

echo "'$file' has highest ($max words) number of words "

echo "plot \"5.dat\" with i linewidth 2,\"4.dat\" with i linewidth 2,\"3.dat\" with i linewidth 2" > gnu
echo "pause -1" >> gnu
gnuplot gnu

rm -rf [A-Z]
