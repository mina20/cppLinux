#!/bin/bash
#cat tr -s ' ' '\n' < numbers.txt > numbers1.txt
cat numbers.txt | sed 's/ / \n/g'
