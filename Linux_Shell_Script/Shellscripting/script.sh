#1/bin/bash
echo "Enter the c file name :"
read filename

if [ -f $filename ]
	then 
		echo "file exist"
	else 
		echo "oops ! No such file!"
		exit
fi	
	
cwords=`less $filename | wc -l`
clines=`less $filename | wc -w`

gcc -o exec.ex $filename
./exec.ex > file1.txt
xwords=`cat file1.txt | wc -w`
xlines=`cat file1.txt | wc -l`

echo "No. of words: $cwords $xwords"
echo "No. of lines:$clines $xlines"
