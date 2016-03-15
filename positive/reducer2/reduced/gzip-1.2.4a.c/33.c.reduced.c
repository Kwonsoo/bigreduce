decode_c() {
  short weight[17];
  unsigned i___0 = 1;
  while (1) {
    if (!(i___0 <= 12))
      goto while_break___2;
    airac_observe(weight, i___0);
    i___0++;
  }
while_break___2:
  i___0--;
}
