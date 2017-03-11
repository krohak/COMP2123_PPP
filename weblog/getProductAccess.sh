#!/bin/bash

#cut -d "	" --fields=1,4 $1 | grep /products/ | sort | uniq

cut -d$'\t' --fields=1,4 $1 | grep /products/ | sort | uniq
