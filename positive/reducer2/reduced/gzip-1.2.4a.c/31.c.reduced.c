decode_c() {
  short start[18];
  unsigned i___0 = 1;
  while (1) {
    if (!(i___0 <= 12))
      goto while_break___2;
    airac_observe(start, i___0);
    i___0++;
  }
while_break___2:
  i___0--;
}
