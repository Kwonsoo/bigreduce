dump_id3_tag() {
  char title[30];
  int i = 0;
  while (1) {
    if (!(i < 30))
      goto while_break;
    airac_observe(title, i);
    i++;
  }
while_break:
  ;
}
