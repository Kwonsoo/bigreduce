main_buf_0() {
  int i;
  char buf[64];
  while (1) {
    while (1) {
      if (main_buf_0)
        goto while_break___1;
      i++;
    }
  while_break___1:
    airac_observe(buf, i);
    i = 0;
  }
}
