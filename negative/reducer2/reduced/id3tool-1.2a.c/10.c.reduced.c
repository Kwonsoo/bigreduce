int id3_styles[146];
id3_findstyle() {
  int ctr = 0;
  while (1) {
    airac_observe(id3_styles, ctr);
    ctr++;
  }
}
