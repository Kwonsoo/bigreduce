checkmp3info() {
  int offsets[3];
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(offsets, i);
    i++;
  }
while_break:
  ;
}
