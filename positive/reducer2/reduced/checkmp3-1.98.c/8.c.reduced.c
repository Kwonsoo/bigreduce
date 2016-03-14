dump_id3_tag() {
  char album[30];
  int i = 0;
  while (1) {
    if (!(i < 30))
      goto while_break___1;
    airac_observe(album, i);
    i++;
  }
while_break___1:
  ;
}
