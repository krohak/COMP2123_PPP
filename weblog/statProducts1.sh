#!/bin/bash

files="`ls *.log`"

for file in $files
	do
	page=(`cut -d\$'\t' -f4 \$file | grep /products/ | sort -r | uniq -c | sort -r | head -n 1 `) 
	echo $file: ${page[1]}
	#cut -d$'\t' -f4 $file | grep /products/ | sort -r | uniq -c | sort -r | head  
	echo Last three product page access:
	grep /products/ $file | tail -n 3 
	echo
	done
