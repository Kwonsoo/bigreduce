int col[256];
SaveAPNG() {
  unsigned colors = 0;
  while (1) {
    if (colors < 256)
      airac_observe(col, colors);
    colors++;
  }
}
