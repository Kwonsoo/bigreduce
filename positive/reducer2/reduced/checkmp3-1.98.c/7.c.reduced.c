dump_id3_tag() {
  char artist[30];
  int i = 0;
  while (1) {
    if (!(i < 30))
      goto while_break___0;
    airac_observe(artist, i);
    i++;
  }
while_break___0:
  ;
}
