sha_update() {
  int i;
  long W[80];
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break;
    airac_observe(W, i);
    i += 2;
  }
while_break:
  ;
}
