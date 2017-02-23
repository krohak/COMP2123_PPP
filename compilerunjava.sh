#!/bin/bash
files="`ls | grep -E '*.java'`"
if [ ${#files} -gt 1 ]
then
	echo "Java files exist"
	for i in $files
	do
		javac $i
	done
	echo "complied java"
else
	echo "no java"
fi
