#!/bin/sh

echo "Enter the file name to create"
read file
touch $file
size=`ls -hl $file  | awk '{print $5}'`

while [ $size -le 16 ]; do
	read tmp
	echo $tmp >> $file
	size=`ls -hl $file  | awk '{print $5}'`
done
echo `cat Q12 | wc -w`
