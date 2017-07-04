#1/bin/bash

echo "Enter the command:"
read command

var=`man $command | grep d --color | wc -w`
echo "$var"
