#!/bin/bash
var="0"
for i in A B C D E F G H I J K L M N O P Q R S T U V W X Z;do
	mkdir $i
	dot="."
	for n in `seq 3 5`;do
		mkdir $i/$i$n
		grep ^$i$dot.$ -i /usr/share/dict/words > $i/$i$n/$i$n.txt
		words=`cat $i/$i$n/$i$n.txt | wc -w`
		if [ $words -gt $var ]
			then 
			var=$words
			filename=$i$n.txt
		fi
		dot=".$dot"
	done
done

echo "'$filename' has highest $var words"

		


































