#!/bin/bash

list=`ls *`
c= "0"
for i in $list;do

	count=`$i | wc -l`
		if [ $count -ge $c ]
			then
				c=`$count`	
			
		fi
	done
			
echo "$c"
