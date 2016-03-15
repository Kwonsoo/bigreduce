int extra_lbits[29];
ct_init() {
  int code = 0;
  while (1) {
    if (!(code < 28))
      goto while_break;
    airac_observe(extra_lbits, code);
    code++;
  }
while_break:
  ;
}
