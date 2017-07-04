#!/bin/sh

#Script to create folders

var="0"
for a in A B C D E F G H I J K L M N O P Q R S T U V W X Y Z; do
	mkdir $a
	dot="."
	for b in ` seq 3 5`; do
		mkdir $a/$a$b
		grep ^$a$dot.$ -i /usr/share/dict/words > $a/$a$b/$a$b.txt
		words=`cat $a/$a$b/$a$b.txt | wc -w`
		if [ $words -gt $var ]
			then
			var=$words
			file=$a$b.txt
		fi
		dot="$dot."
	done
done

echo "'$file' has maximum ($var words) number of words "
