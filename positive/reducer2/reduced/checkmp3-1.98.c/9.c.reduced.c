dump_id3_tag() {
  char year[4];
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___2;
    airac_observe(year, i);
    i++;
  }
while_break___2:
  ;
}
