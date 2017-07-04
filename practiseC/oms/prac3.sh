#!/bin/bash
echo "Enter file name"
read file
echo "Enter word for search"
read word
if [ -f $file ];then
grep ^ -i is "$file"
else
echo "file not exist"
fi

