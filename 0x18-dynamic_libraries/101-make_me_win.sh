#!/bin/bash
wget https://github.com/wulzymart/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libatoi.so -O /tmp/libatoi.so
export LD_PRELOAD="/tmp/libatoi.so"
