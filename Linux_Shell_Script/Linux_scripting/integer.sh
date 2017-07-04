#!/bin/bash

echo Enter something
var=$*

if [ $var -eq $var ]
	then
		echo $var is an integer
	else
		echo $var is not an integer
		exit 1
fi
