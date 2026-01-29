#!/bin/sh
id --groups --name | tr " " "," | tr -d "\n"