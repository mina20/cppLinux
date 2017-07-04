#!/bin/sh

grep ^z....$ -i /usr/share/dict/words > file.txt
#sed -n '7,20p' file.txt
#lines=`cat file.txt | wc -l`
#half=$(( $lines/2 ))
#sed -n "${half},${lines}p" file.txt
#sed -n "/'/,/$/p" file.txt


#sed -e 's/^/Abhishek /g' dummy.txt -e 's/$/ Hingne/g' dummy.txt 

sed -ne '/^s....$/p' /usr/share/dict/words
grep ^s....$ -i /usr/share/dict/words > file1.txt
echo sed -n '/sweep/,$p' file1.txt | wc -l
sed -n '/sweep/,$p' file1.txt > a.txt
sed -e '1,3d' a.txt -e 's/^/ZZ/g' | wc -l

sed -ne '/^s....$/p' /usr/share/dict/words | sed -n '/sweep/,$p' | sed -e '1,3d' -e 's/^/ZZ/g' | wc -l

