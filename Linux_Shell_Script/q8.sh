#!/bin/sh

var="A"

while [ $var != EXIT -a $var != exit -a $var != Exit ]; do
	echo "Enter the word to search"
	read var
	count=`ls /etc/ | sed -n "/$var/p" | wc -l`
	echo "Number of words found: $count"
done
