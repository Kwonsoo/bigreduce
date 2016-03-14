dump_id3_tag() {
  char comment[30];
  int i = 0;
  while (1) {
    if (!(i < 29))
      goto while_break___3;
    airac_observe(comment, i);
    i++;
  }
while_break___3:
  ;
}
