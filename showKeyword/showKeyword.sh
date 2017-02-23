#!/usr/bin/bash

files="`ls *.txt`"

super=0
super_word=0
super_file=0

for file in $files
do
	key="`./getKeyword.sh $file | cut -d \" \" -f1`"
	count="`./getKeyword.sh $file | cut -d \" \" -f2`"
	
	if [ $count -gt $super ]
	then
		super=$count
		super_word=$key	
		super_file=$file
	fi
	
		
	words="`wc -w $file | cut -d \" \" -f1`"
	
	echo $file: $words words
	echo Keyword: $key
	
	#head -n 3 $file
	grep $key $file -m 3
	echo 
done
echo The word is: \'$super_word\' in $super_file
