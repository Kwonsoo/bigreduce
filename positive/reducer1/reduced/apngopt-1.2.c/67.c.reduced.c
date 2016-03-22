int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int tmp___63;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___41;
    SaveAPNG_colors++;
  }
while_break___41:
  if (SaveAPNG_colors < 256)
    tmp___63 = SaveAPNG_colors;
  airac_observe(col, tmp___63);
}
