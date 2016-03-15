int base_dist[30];
ct_init() {
  int code = 0;
  while (1) {
    if (!(code < 16))
      goto while_break___1;
    airac_observe(base_dist, code);
    code++;
  }
while_break___1:
  ;
}
