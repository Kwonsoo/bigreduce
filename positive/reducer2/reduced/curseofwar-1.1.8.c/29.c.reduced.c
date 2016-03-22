const dirs[6];
simulate() {
  int k = 0;
  while (1) {
    if (!(k < 6))
      goto while_break___1;
    airac_observe(dirs, k);
    k++;
  }
while_break___1:
  ;
}
