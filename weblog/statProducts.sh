#!/bin/bash

files="`ls *.log`"

for file in $files
	do
	page=(`sh getProductAccess.sh \$file | cut -d\$'\t' -f2  | sort | uniq -c | sort -r | head -n 1`)
	echo $file: ${page[1]}
	echo Last three product page access:
	grep /products/ $file | tail -n 3 
	echo
	done
