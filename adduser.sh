#!/bin/bash

while read file 
do
	echo "hello" $file
done < $1
