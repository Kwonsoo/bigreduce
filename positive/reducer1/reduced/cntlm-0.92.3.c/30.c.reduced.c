direct_request() {
  int rsocket[2];
  int loop = 0;
  while (1) {
    if (!(loop < 2))
      goto while_break___0;
    airac_observe(rsocket, loop);
    loop++;
  }
while_break___0:
  ;
}
