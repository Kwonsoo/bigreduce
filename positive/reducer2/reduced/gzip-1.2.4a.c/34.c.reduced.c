short make_table_jutbits;
decode_c() {
  short weight[17];
  unsigned i___0 = 1;
  while (1) {
    if (!(i___0 <= 8))
      goto while_break___2;
    i___0++;
  }
while_break___2:
  if (!(i___0 <= 16))
    goto while_break___3;
  airac_observe(weight, i___0);
while_break___3:
  i___0 = make_table_jutbits;
}
