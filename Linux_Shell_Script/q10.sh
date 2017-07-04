#!/bin/sh

echo "Enter the password"
read guess
guess=`echo $guess | hexdump -v -e '/1 "%02X"'`
passwd=`cat passwd.txt`

if [ $guess = $passwd ]; then
	echo "Correct password"
else
	echo "Incorect password"
fi


