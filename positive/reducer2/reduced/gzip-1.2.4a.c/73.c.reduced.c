int extra_dbits[30];
ct_init_dist() {
  int code = 0;
  while (1) {
    if (!(code < 16))
      goto while_break___1;
    airac_observe(extra_dbits, code);
    code++;
  }
while_break___1:
  ;
}
