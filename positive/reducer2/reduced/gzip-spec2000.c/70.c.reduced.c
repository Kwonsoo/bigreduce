short bl_count[16];
gen_codes() {
  int bits = 1;
  while (1) {
    if (!(bits <= 15))
      goto while_break;
    airac_observe(bl_count, bits - 1);
    bits++;
  }
while_break:
  ;
}
