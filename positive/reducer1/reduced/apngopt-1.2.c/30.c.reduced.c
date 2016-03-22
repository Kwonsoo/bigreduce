int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int k;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___11;
    k = SaveAPNG_colors++;
  }
while_break___11:
  if (SaveAPNG_colors <= 256) {
    if (!(k < SaveAPNG_colors))
      goto while_break___19;
    airac_observe(col, k);
  }
while_break___19:
  ;
}
