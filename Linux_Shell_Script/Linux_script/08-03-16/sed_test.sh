#!/bin/bash

sed -n '/^s....$/p' /usr/share/dict/words | sed -n '/sweep/,$p' | sed  "1,3d" | sed "s/^s/ZZ/g"

sed '/^</d' /usr/share/onboard/docs/index.html | sed '/>/d'

#sed -n '7,20p' file.txt

#lines=`cat file.txt| wc -l`

#sed -n '/sweep/,$p' file.txt > sweepeof.txt
#sed  "1,3d" sweepeof.txt | sed "s/^s/ZZ/g"
#half=`echo $(( $lines/2  ))`

#sed -n "${half},${lines}p" file.txt

#sed "s/^/ATISH /g" file.txt | sed "s/$/ DIXIT/g"
