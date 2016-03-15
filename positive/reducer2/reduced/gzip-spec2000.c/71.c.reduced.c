ct_init() {
  short next_code[16];
  int bits = 1;
  while (1) {
    if (!(bits <= 15))
      goto while_break;
    airac_observe(next_code, bits);
    bits++;
  }
while_break:
  ;
}
