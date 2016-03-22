int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int k;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___41;
    k = SaveAPNG_colors++;
  }
while_break___41:
  if (SaveAPNG_colors <= 256) {
    if (!(k < SaveAPNG_colors))
      goto while_break___49;
    airac_observe(col, k);
  }
while_break___49:
  ;
}
