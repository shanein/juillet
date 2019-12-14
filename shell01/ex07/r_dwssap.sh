#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d ":" -f1 | rev | sort -r | tr '\n' '/' | cut -d / -f $FT_LINE1-$FT_LINE2 | sed 's/\//, /g' | sed 's/$/./' | tr -d '\n' 
