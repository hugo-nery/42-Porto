#!/bin/bash

if [ $# -eq 0 ]; then
	echo 'No args sup.'
fi

for i;
do
	mkdir ex${i} 
done
