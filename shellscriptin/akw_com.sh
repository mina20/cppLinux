 ls /etc/ | awk '/conf$/ {print $0}' |wc - l

ls /etc/ | awk '/^[ax].*conf$/ {print $0}'
#find file start with add end with conf and find its size
 ls -al /etc/  | awk '/add.*conf$/ {print $0}'
#print 6 col and 5 col from directryls 
-al /etc/  | awk '/add.*conf$/ {print $0}
 #after prog do this thing
END print ....at start BEGIN
