process_dev() {
  char pmodes[64];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 64)
      goto while_break;
    airac_observe(pmodes, tmp);
    tmp++;
  }
while_break:
  ;
}
