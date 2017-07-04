#!\bin\sh

#this is my first and worst script

for a in 01 02 03 04 05 06 07 08 09 `seq 10 15` ;do 
	echo "Creating a directory name CMS$a"  
        mkdir CMS15$a
        echo cms15$a > cms15$a.txt ;
        done
        echo "Every thing done,Good bye!"


