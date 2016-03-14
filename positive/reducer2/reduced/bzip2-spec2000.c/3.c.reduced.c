int spec_fd[3];
spec_init() {
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(spec_fd, i);
    i++;
  }
while_break:
  ;
}
