short pt_table[256];
decode_c() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 256))
      goto while_break___0;
    airac_observe(pt_table, i___0);
    i___0++;
  }
while_break___0:
  ;
}
