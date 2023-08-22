#!/bin/bash
wget -P /tmp https://github.com/leoemaxie/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
