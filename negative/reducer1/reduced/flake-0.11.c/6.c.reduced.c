int a, b;
calc_sums(int pmax, int (*sums)[8]) {
  int i = 0;
  while (1) {
    if (a)
      goto while_break;
    airac_observe(*(sums + pmax), i);
    i++;
  }
while_break:
  i = pmax - 1;
}

calc_rice_params_fixed() {
  int c[1][1 << 8];
  calc_sums(b, c);
}
