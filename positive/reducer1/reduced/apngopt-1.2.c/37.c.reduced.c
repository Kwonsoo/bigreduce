int col[256];
char col_0_3;
int SaveAPNG_colors;
SaveAPNG_b() {
  int k;
  while (SaveAPNG_colors <= 256) {
    k = 0;
    while (1) {
      if (!(k < SaveAPNG_colors))
        goto while_break___29;
      if (col_0_3)
        airac_observe(col, k);
      k++;
    }
  while_break___29:
    SaveAPNG_colors++;
  }
}
