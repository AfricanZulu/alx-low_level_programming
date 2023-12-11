#!/bin/bash
wget -P /tmp/ https://raw.github.com/NomaAfrika/alx-low_level_programming/main/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so

