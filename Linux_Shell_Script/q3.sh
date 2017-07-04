#!/bin/sh

year=`seq 1400 2016`
count=0
tmp=" "
for i in $year; do
	flag=`cal -m 8 $i | awk '{print $6}' | sed -n '/15/p'|wc -l`
	if [ $flag -ne 0 ] ; then
		count=$(( count+1 ))
		tmp="$tmp \n $i"
	fi
done
echo $tmp > tmp.txt
echo There are total $count instances of 15th Aug on Friday. Here are first and last 5 years:
#head -n 5 tmp.txt
#tail -n 5 tmp.txt
#rm -rf tmp.txt
sed -n '2,6p' tmp.txt
sed -n '84,$p' tmp.txt 
rm -rf tmp.txt
