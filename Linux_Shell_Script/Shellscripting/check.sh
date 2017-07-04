#!/bim/bash

listing=`ls *`

for i in $listing;do
	if [ -d $i ]
	then
		echo "directory is found "
	else
		echo "$i"
	fi
done


