#!/usr/bin/bash

a="`./getWords.sh $1 | sort | uniq -c | sort -n | tail -n 1 | cut -d \" \" -f8`"
b="`./getWords.sh $1 | sort | uniq -c | sort -n | tail -n 1 | cut -d\" \" -f7`"

#a="`sort $a`"
#for word in $a
#do
echo $a $b  

