state_init_s() {
  int d[1][29];
  int i, j = 0;
  while (1) {
    if (!(j < 29))
      goto while_break___0;
    airac_observe(d[i], j);
    j++;
  }
while_break___0:
  ;
}
