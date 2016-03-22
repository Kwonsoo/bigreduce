state_init_s() {
  int u[1][29];
  int i, j = 0;
  while (1) {
    if (!(j < 29))
      goto while_break___0;
    airac_observe(u[i], j);
    j++;
  }
while_break___0:
  ;
}
