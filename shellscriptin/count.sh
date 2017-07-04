
#!/bin/bash

 echo "Enter the file name"
 read var

if [ -f $var ] && [  -s $var ]
   then 
        echo "file exist"
   else 
        echo "oop! no such a file!" 
        exit
fi
if [ $var -ge 10]
   then
   echo"file has lines greater then 10"
   else
   echo"files has lines less then 10"
fi
 
lines=`less $var | wc -l`
words=`less $var | wc -w`

 gcc $var -o exec.x
 outlines=`./exec.x | wc -l`
 outlines=`./exec.x | wc -w`

 echo "The program has $lines lines and $words words. Upon execution the output has
 $lines lines and $words words."

 

 #program end here
