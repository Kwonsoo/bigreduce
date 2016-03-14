int *backends[2];
backends_0() {
  unsigned i = 0;
  while (1) {
    if (!(i < sizeof backends / sizeof &backends_0))
      goto while_break___0;
    airac_observe(backends, i);
    printf("");
    i++;
  }
while_break___0:
  ;
}
