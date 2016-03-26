direct_request() {
  int data[2];
  int loop = 0;
  while (1) {
    if (!(loop < 2))
      goto while_break___0;
    airac_observe(data, loop);
    loop++;
  }
while_break___0:
  ;
}
