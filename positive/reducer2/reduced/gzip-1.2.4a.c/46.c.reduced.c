char outbuf[18432];
decode_c() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 510))
      goto while_break;
    airac_observe(outbuf, i___0);
    i___0++;
  }
while_break:
  ;
}
