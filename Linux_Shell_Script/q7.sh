#!/bin/sh

choice=C
counter=1
while [ $choice = C -o $choice = D ] ; do
	echo "What's your choise? (C/D):"
	read choice
	tmp=$(( $counter % 2 ))
#	tmp=`echo "$counter % 2" | bc -lq`
	echo $tmp
	if [ $tmp -eq 0 ] ; then
		mychoice=C
	fi
	if [ $tmp -ne 0 ] ; then
		mychoice=D
	fi
	if [ $choice = C -a $mychoice = C ] ; then
		echo "You entered C, my choice C. Therefore score is : (3,3). Its a tie."
	else if [ $choice = C -a $mychoice = D ] ; then
		echo "You entered C, my choice D. Therefore score is : (0,5). I win."
	else if [ $choice = D -a $mychoice = C ] ; then
		echo "You entered D, my choice C. Therefore score is : (5,0). You win."
	else if [ $choice = D -a $mychoice = D ] ; then
		echo "You entered D, my choice D. Therefore score is : (1,1). Its a tie."
	fi
	fi
	fi
	fi
	counter=$(( $counter + 1 ))

done
