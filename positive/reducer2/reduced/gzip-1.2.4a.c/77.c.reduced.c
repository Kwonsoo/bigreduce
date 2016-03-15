short bl_count[16];
ct_init() {
  int bits = 0;
  while (1) {
    if (!(bits <= 15))
      goto while_break___5;
    airac_observe(bl_count, bits);
    bits++;
  }
while_break___5:
  ;
}
