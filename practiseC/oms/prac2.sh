
#!/bin/bash
echo "Enter text"
read text
w=`echo $text | wc -l`
l=`echo $text | wc -w`
echo "no of lines are $w lines and $l no of words"

