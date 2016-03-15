char pt_len[19];
int read_pt_len_i___0;
decode_c() {
  int tmp___5;
  while (1) {
    if (!(read_pt_len_i___0 < 19))
      goto while_break___4;
    tmp___5 = read_pt_len_i___0++;
    airac_observe(pt_len, tmp___5);
  }
while_break___4:
  ;
}
