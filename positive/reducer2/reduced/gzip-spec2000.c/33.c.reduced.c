unzip() {
  int n;
  char buf[16];
  n = 0;
  while (1) {
    if (!(n < 8))
      goto while_break___0;
    airac_observe(buf, n);
    n++;
  }
while_break___0:
  ;
}
