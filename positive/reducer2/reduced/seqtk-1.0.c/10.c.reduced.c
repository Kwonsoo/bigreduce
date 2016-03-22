stk_famask() {
  int fp[2];
  int i = 0;
  while (1) {
    if (!(i < 2))
      goto while_break;
    airac_observe(fp, i);
    i++;
  }
while_break:
  ;
}
