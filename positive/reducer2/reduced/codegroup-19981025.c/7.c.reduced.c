char obuf[32];
main() {
  int j = 0;
  while (1) {
    if (!(j < 32))
      goto while_break___1;
    airac_observe(obuf, j);
    j++;
  }
while_break___1:
  ;
}
