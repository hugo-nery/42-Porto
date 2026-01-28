#!/bin/sh
ip addr show | grep "link/ether" | cut -b 16-32
