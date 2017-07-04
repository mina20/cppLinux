#!/bin/bash

max="0"
letters=`echo {A..Z}`
for var in $letters; do
	mkdir $var
	dot="."
	for num in 3 4 5; do
		mkdir $var/$var$num
		grep ^$var$dot.$ -i /usr/share/dict/words > $var/$var$num/$var$num.txt 
		words=`cat $var/$var$num/$var$num.txt | wc -w`
		if [ $words -gt $max ]
                        then
                        max=$words
                        file=$var$num.txt
                fi
		dot=".$dot"
	done
done

echo "'$file' has highest ($max words) number of words "
