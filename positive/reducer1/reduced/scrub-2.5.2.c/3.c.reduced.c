char ctr[16];
churnrand() {
  unsigned buf = ctr;
  int n = 0;
  while (1) {
    if (!(n < 16))
      goto while_break;
    airac_observe(buf, n);
    n++;
  }
while_break:
  n = read_all();
}
