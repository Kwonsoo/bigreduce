struct __anonstruct_bigint_1 {
  long val[2];
} bigint_string() {
  struct __anonstruct_bigint_1 a;
  int i = 0;
  while (1) {
    if (!(i < 2))
      goto while_break;
    airac_observe(a.val, i);
    i++;
  }
while_break:
  ;
}
