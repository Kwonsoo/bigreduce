int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int k = 0;
  while (SaveAPNG_colors < 256) {
    SaveAPNG_colors++;
    if (!(k < SaveAPNG_colors))
      goto while_break___38;
    airac_observe(col, k);
    k++;
  while_break___38:
    ;
  }
}
