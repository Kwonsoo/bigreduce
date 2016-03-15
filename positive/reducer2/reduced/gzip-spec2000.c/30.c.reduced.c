int spec_fd[3];
spec_init() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 3))
      goto while_break;
    airac_observe(spec_fd, i___0);
    i___0++;
  }
while_break:
  ;
}
