parseInsert() {
  char digit[8];
  char a = 0;
  while (1) {
    if (!(a < 8))
      goto while_break___0;
    airac_observe(digit, a);
    a = a + 1;
  }
while_break___0:
  ;
}
