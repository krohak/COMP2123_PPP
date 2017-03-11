#!/bin/bash

files="`ls *.log`"

for file in $files
	do
	sh getProductAccess.sh $file | cut -d$'\t' -f2  | sort >> file
	done

unique="`uniq -c file | sort -r | wc -l`"  


no="`ls *.log | wc -l`"

let "avg=$unique/$no"

echo Average access: $avg

rm file
