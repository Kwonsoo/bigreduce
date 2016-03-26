const cb32[33];
b32_8to5() {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break;
    airac_observe(cb32, i);
    i++;
  }
while_break:
  ;
}
