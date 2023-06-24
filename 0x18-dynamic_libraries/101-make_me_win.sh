#!/bin/bash
wget -qO ../libat.so https://github.com/wulzymart/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libatoi.so
export LD_PRELOAD="../libat.so"
