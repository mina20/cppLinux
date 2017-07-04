#!/bin/bash

#test script to check the exit status


echo "Tell me a file name"
read filename

if [ -e $filename ] ; then
   exit 0
else
   exit 10
fi
