huft_build() {}

inflate_fixed() {
  int i___0;
  int l[288];
  while (1) {
    if (!(i___0 < 280))
      goto while_break___1;
    i___0++;
  }
while_break___1:
  if (!(i___0 < 288))
    goto while_break___2;
  airac_observe(l, i___0);
while_break___2:
  i___0 = huft_build();
}