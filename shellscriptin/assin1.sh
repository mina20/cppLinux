#!/bin/bash
#--------------------------------------------------------------------

var='0'
echo $*
#echo "Enter charecter  "
#read char
if [ $# -lt 1 ] ; then
   echo "oops! I need at least one argument"
   exit 1
else
   letters=$*
  # echo $*
fi
 #  echo $*
#   exit 0

#letters=$1

for a in $letters;do
    mkdir $a
    d='.'
        
        
        for b in `seq 3 5` ;do
        mkdir $a/$a$b
    
    grep ^$a$d$[a-z]$ -i /usr/share/dict/words > $a/$a$b/$a$b.txt

    word=`cat $a/$a$b/$a$b.txt | wc -w`
    echo $words >> $a.dat
    if [ $word -gt $var ]
    then
         var=$word
         fn=$a$b.txt
    fi
    d="."$d
    done
 done
echo $fn contain $var words 
echo "plot \"3.dat\"with line linewidth 2 ,"\4.dat"w l wl 2,"\5.dat" w l lw 2" > gnu
echo "pause -1 ">>gnu



     
   


