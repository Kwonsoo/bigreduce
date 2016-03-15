int extra_dbits[30];
ct_init() {
  int code = 0;
  while (1) {
    if (!(code < 16))
      goto while_break___1;
    code++;
  }
while_break___1:
  if (!(code < 30))
    goto while_break___3;
  airac_observe(extra_dbits, code);
while_break___3:
  ;
}
