#!/bin/bash

echo "Enter name of commands:"
read command

var="0"

for i in $command; do
	man $i 1> com_$i.txt 2>/dev/null
        if [ -s com_$i.txt ]
                then
                cword=`cat com_$i.txt | wc -w`
                if [ $cword -gt $var ]
                        then
                        var=$cword
                        file=$i

                fi
	else
		echo "command '$i' not exist"
		exit
        fi
done

echo "'$file' has highest $var lines number of lines "


