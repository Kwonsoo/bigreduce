short bl_count[16];
flush_block() {
  int bits = 0;
  while (1) {
    if (!(bits <= 15))
      goto while_break;
    airac_observe(bl_count, bits);
    bits++;
  }
while_break:
  bits--;
}
