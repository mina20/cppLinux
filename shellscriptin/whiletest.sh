#!/bin/bash

counter=0

while [ $counter -le 10 ]; do
      echo "$counter is still less then 10"

 #     counter=$(( $counter +1 ))
       counter= echo "$counter +1 " | bc -lq
      done
