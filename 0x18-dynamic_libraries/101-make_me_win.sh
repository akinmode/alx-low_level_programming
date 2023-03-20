#!/bin/bash
wget -P /tmp https://github.com/akinmode/alx-low_level_programming/raw/master/0x18-dynamic_libraries/winning.so
export LD_PRELOAD=/tmp/winning.so