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
      airac_observe(col, k);
      if (col_0_2)
        k++;
    }
  while_break___42:
    SaveAPNG_colors++;
  }
}
