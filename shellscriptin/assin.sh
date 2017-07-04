
#!/bin/bash
#--------------------------------------------------------------------

var='0'
for a in A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ;do
    mkdir $a
    d='.'
	for b in `seq 3 5` ;do
        mkdir $a/$a$b
    grep ^$a$d[a-z]$ -i /usr/share/dict/words > $a/$a$b/$a$b.txt
   
    word=`cat $a/$a$b/$a$b.txt | wc -w`
   echo $word >> $b.dat
    if [ $word -gt $var ]
    then
         var=$word   
         fn=$a$b.txt
    fi
    d="."$d      
    done
   rm -rf $a

done
echo $fn contain $var words
echo "plot \"3.dat\"with i linewidth 2 ,\"4.dat\"w i lw 2,\"5.dat\" w i lw 2" > gnu
echo "pause -1 ">> gnu
gnuplot gnu
