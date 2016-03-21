_new_cl() {
  char randstr[7];
  unsigned i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break;
    airac_observe(randstr, i);
    i++;
  }
while_break:
  ;
}
