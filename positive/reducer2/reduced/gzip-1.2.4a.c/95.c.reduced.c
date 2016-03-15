int heap_len, build_tree___0_n, build_tree___0_tmp;
char depth[573];
build_tree___0() {
  int new;
  while (1) {
    if (heap_len)
      goto while_break___0;
    if (build_tree___0_n < 2) {
      build_tree___0_n++;
      build_tree___0_tmp = build_tree___0_n;
    } else
      build_tree___0_tmp = 0;
    new = build_tree___0_tmp;
    airac_observe(depth, new);
  }
while_break___0:
  build_tree___0_n--;
}
