#!/bin/bash
gcc -c -Wextra reduce.c &&\
/home/kwonsoo/redu/analyzer/main.native reduce.c | grep -F "(AIRAC_OBSERVE)FI (false) Size: [-oo, +oo] Offset: [0, 0] Index : [0, 0] FS (true) Size: [1, +oo] Offset: [0, 0] Index : [0, 0] prevbuf 0"
