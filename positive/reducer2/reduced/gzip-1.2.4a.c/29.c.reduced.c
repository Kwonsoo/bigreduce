decode_c() {
  short count[17];
  unsigned i___0 = 1;
  while (1) {
    if (!(i___0 <= 16))
      goto while_break___1;
    airac_observe(count, i___0);
    i___0++;
  }
while_break___1:
  i___0--;
}
