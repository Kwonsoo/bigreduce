int col[256];
char col_0_2;
int SaveAPNG_colors;
SaveAPNG_a() {
  int k;
  while (SaveAPNG_colors <= 256) {
    k = 0;
    while (1) {
      if (!(k < SaveAPNG_colors))
        goto while_break___42;
      if (col_0_2)
        airac_observe(col, k);
      k++;
    }
  while_break___42:
    SaveAPNG_colors++;
  }
}
