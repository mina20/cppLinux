#!/bin/bash

listing=`ls *`

var="0"

for i in $listing; do
	if [ ! -d $i ]
		then
		clines=`cat $i | wc -l`
		if [ $clines -gt $var ]
			then
			var=$clines
			file=$i

		fi
	fi
done

echo "'$file' has highest $var lines number of lines "
