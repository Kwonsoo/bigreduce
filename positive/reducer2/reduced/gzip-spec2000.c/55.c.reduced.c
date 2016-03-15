int base_dist[30];
ct_init() {
  int code = 0;
  while (1) {
    if (!(code < 16))
      goto while_break___1;
    code++;
  }
while_break___1:
  if (!(code < 30))
    goto while_break___3;
  airac_observe(base_dist, code);
while_break___3:
  ;
}
