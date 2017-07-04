#!/bin/bash

# Program to generate random question



keepreading="F"

max_rollno=20

while [ $keepreading == "F" ] ; do
    echo "Please enter last two digits of your roll number:"
    read r_int

    if [ "$r_int" -eq "$r_int" ] 2>/dev/null
    then
     :
    else
        echo "Sorry wrong integer! I need only last TWO digits. Try again"
     exit 1
fi

    if [ ${r_int} -lt 1 -o ${r_int} -gt $max_rollno ] ; then
        echo "Sorry wrong integer! I need only last TWO digits. Try again"
    else
        keepreading="T"
    fi

done

echo 
for a in `seq 50`; 
    do
        rnd=$[  $[ RANDOM % 20 ] ]
        echo -ne "generating a random question, please hang on: $rnd\033[0K\r"
        sleep .1
    done
echo

openssl enc -d -aes-256-cbc -a -in /nfs/home/exam/exam.exe |  bash -
if [ $? -ne 0 ] ; then
    echo "Oops! Something wrong? Please call the invigilator"
else
    echo "This file was automatically generated for CMS15$r_int" >> question.txt
fi
