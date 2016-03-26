DecodeSchemeEdifact() {
  int i;
  char unpacked[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___0;
    airac_observe(unpacked, i);
    i++;
  }
while_break___0:
  ;
}
