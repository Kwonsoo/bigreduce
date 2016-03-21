int rvec[4];
main() {
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(rvec, i);
    i++;
  }
while_break:
  ;
}
