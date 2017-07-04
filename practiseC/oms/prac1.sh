#!/bin/bash
echo "Enter file name"
read file
 if [ -f $file ]
 then
echo "file exist"
 
line=`less $file | wc -l`
word=`less $file | wc -w`
 
echo "file cotain $line no of lones and $word no of words"
 
else
echo "file not exist"
fi


 
  
