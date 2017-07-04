#!/bin/sh

#Script to create folders

var="0"
#echo "Enter the character"
#read a
if [ $# -lt 1 ] ; then
	echo "atleast one argument needed"
	exit 1
fi

#$# Counts command line arguments
#$* Prints Command line argument
a=$*
for a in $a; do
	mkdir $a
	dot="."
	for b in ` seq 3 5`; do
		mkdir $a/$a$b
		grep ^$a$dot.$ -i /usr/share/dict/words > $a/$a$b/$a$b.txt
		words=`cat $a/$a$b/$a$b.txt | wc -w`
		echo $words >> $b
		if [ $words -gt $var ]
			then
			var=$words
			file=$a$b.txt
		fi
		dot="$dot."
	done
	rm -rf $a
	#echo "'$file' has maximum ($var words) number of words "
done
echo "'$file' has maximum ($var words) number of words "

echo "plot \"3\" with line linewidth 3, \"4\" w l lw 2,\"5\" w l lw 2" > gnu
echo "pause -1" >> gnu
gnuplot gnu
