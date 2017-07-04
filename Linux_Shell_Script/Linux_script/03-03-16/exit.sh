#!/bin/bash

#test the extit status

echo "Tell me a file name"
read filename

if [ -e $filename  ]; then
	exit 0
else
	exit 15
fi
