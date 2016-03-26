const cb32_ucase[33];
b32_8to5() {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break;
    airac_observe(cb32_ucase, i);
    i++;
  }
while_break:
  ;
}
