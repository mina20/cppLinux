#1/bin/bash

echo "Enter the filename:"
read filename

if [ -f $filename ]
	then	
	if [ -s $filename ]
	then
		echo "File Exit and of non zero size"
	else
		echo "File exist and of zero size"
	fi

else
		echo "No such file"
fi

#if [ -f $filename -a -s $filename ]
#	then
#                echo "File Exit and of non zero size"
#        else
#                echo "File not exist"
#       fi

clines=`$filename | wc -l`
if [ $clines -ge 1 ]
	then
		echo "Lines are > 1"
	else
		echo "Lines are < 1"
fi

