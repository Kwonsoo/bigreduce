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
      airac_observe(col, k);
      if (col_0_3)
        k++;
    }
  while_break___29:
    SaveAPNG_colors++;
  }
}
