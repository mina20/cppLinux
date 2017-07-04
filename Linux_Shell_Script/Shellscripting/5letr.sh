#!/bin/bash

grep -i ^[z]....$ /usr/share/dict/words > file1.txt
#sed -n '7,20p' file1.txt
#lines=`cat file1.txt | wc -l`
#half=$(($lines/2))
#sed -n "${half},${lines}p" file1.txt

cat file1.txt | sed -n "/'/,/$/p"
