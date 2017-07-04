#!/bin/bash

#cat file.txt | sed -n '/'/,/EOF/,$p'
dict="/usr/share/dict/words"

grep ^S...[a-z]$ -i $dict > file.txt
cat file.txt | sed -n '/'/,/EOF/,$p'

word=`cat file.txt | wc -l`
echo "file $file contain words for the $word times"
#sed -n '/sweep/p' file.txt >file1.txt








