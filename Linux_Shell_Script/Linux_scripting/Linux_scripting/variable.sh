#!bin/bash

#Demo program to illustrate variables

read grep
t=`man grep| wc -l`
var=`man grep|grep --color -i is | wc -l`
#echo $t

echo "Out of " $t "lines" $var "matches"

