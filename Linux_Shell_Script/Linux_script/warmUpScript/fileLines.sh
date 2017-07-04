#!/bin/bash

echo "Enter the commands you want to check: "
read listing

var="0"

for l in $listing; do
	man $l 1> ad_$l.txt 2>/dev/null
	if  [ -s ad_$l.txt  ] 
		then
		words=`cat ad_$l.txt| wc -w`
		if [ $words -gt $var ]
			then
			var=$words
			file=$l
		fi
	else
		echo "Command '$l' not found"
		exit
	fi
done

rm ad_*

echo "'$file' manual has highest ($var words) number of words "
