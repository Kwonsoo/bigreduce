char pt_len[19];
decode_c() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 19))
      goto while_break;
    airac_observe(pt_len, i___0);
    i___0++;
  }
while_break:
  ;
}
