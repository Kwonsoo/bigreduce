const dirs[6];
output_grid() {
  int k = 0;
  while (1) {
    if (!(k < 6))
      goto while_break___2;
    airac_observe(dirs, k);
    k++;
  }
while_break___2:
  ;
}
