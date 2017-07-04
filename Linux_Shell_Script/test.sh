#!/bin/bash

var=$*
echo $#

for var in var; do
	if [ $(( $var/1 )) -eq $var ]; then
			echo $var is a number
		else
			echo $var is not a number
	fi
done
