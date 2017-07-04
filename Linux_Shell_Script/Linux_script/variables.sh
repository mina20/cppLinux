#1/bin/bash

# Demo program to illustrate the variables
# A program by Atish on his birthday

#---------------------------------------

echo "Enter the command name"
read var

echo "Enter the keyword: "
read keyword

var1=`man $var | grep $keyword -i -w --color | wc -l`
var2=`man $var | wc -l`

echo " total $var1 lines with '$keyword' out of $var2"


# Program ends here
