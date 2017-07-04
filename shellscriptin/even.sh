
#!/bin/bash

# no even or odd

  echo "Please enter any no"
  read no
  if [ `echo $no%2|bc -l`=0 ];then
  echo "$no is even"
  else 
  echo "$no is odd"
  fi

