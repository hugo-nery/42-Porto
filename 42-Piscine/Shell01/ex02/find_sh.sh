#!/bin/sh
ls -R | grep ".sh" | cut -d'.' -f1
