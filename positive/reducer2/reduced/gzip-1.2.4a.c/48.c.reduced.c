char outbuf[18432];
int read_c_len_i___0;
decode_c() {
  int tmp___5;
  while (1) {
    if (!(read_c_len_i___0 < 510))
      goto while_break___4;
    tmp___5 = read_c_len_i___0++;
    airac_observe(outbuf, tmp___5);
  }
while_break___4:
  ;
}
