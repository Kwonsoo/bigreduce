#!/bin/bash
gcc -c -Wextra reduce.c &&\
/home/kwonsoo/redu/analyzer/main.native reduce.c | grep -F "(AIRAC_OBSERVE)FI (false) Size: [128, 128] Offset: [0, 0] Index : [0, +oo] FS (true) Size: [128, 128] Offset: [0, 0] Index : [0, 127] StartOf(@freq_tab[i]) j"
