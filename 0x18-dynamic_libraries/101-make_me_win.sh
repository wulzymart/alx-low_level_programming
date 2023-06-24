#!/bin/bash
wget https://github.com/wulzymart/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libatoi.so -O ../libatoi.so
export LD_PRELOAD="../libatoi.so"
