#!/bin/bash
grep -i ^[s]....$ /usr/share/dict/words > dict.txt
cat dict.txt | sed -n '/sweep/,$p' | sed '1,3d' > dict1.txt
sed 's/^[s]/zz/' dict1.txt | wc -l

