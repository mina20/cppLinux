#1/bin/bash

# Demo program to illustrate the variables
# A program by Atish on his birthday

#---------------------------------------

echo "Enter the C file name: "
read var

if [ -f $var ] && [ -s $var ]
	then
		echo "file exists and is of non-zero size"
	else
		echo "either no such file or an empty size"
		exit
fi

clines=`less $var | wc -l`
cwords=`less $var | wc -w`

if [ $clines -gt 5  ]
	then
		echo "more than 5 lines"
fi

gcc $var -o exec.x

xlines=`./exec.x | wc -l`
xwords=`./exec.x | wc -w`

echo  "The program '$var' has $clines lines and $cwords words. Upon execution the output has
$xlines lines and $xwords words."

# Program ends here
