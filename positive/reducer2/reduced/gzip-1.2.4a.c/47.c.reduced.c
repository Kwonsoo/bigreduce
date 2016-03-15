short d_buf[32768];
decode_c() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 4096))
      goto while_break___0;
    airac_observe(d_buf, i___0);
    i___0++;
  }
while_break___0:
  ;
}
