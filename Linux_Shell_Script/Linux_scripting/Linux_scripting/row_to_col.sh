#!/bin/sh

ls /etc/ | awk '/conf/ {print $0}' |wc -l
ls /etc/ | awk '/^[ax].*.conf$/ {print $0}' | wc -l
sed's/ /\n/g'
cat /etc/passwd | sed 's/:/ /g' | awk 'BEGIN {print "User Name \t Real Name"} /guest/{print $1 "\t" $5}'| sed 's/,,,/ /g'

ls -al /lib | grep ^- | sed "s/root/`whoami`/" | head -n10
echo "(2-2.0001)<0.0001" | bc -ql
