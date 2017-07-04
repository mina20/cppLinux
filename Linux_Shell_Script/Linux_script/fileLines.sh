#!/bin/bash

listing=`ls *`

var=0

for l in $listing; do
	if [ ! -d $l ]
		then
		lines=wc -l $l
		if [ $lines -gt var ]
			then
			$var=$lines
			file=$l
		fi
	fi
done

echo $file
