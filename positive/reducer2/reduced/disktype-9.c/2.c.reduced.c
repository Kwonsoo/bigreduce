detect_sysv() {
  int offsets[5];
  unsigned tmp = 3;
  while (1) {
    if (tmp >= 5)
      goto while_break;
    airac_observe(offsets, tmp);
    tmp++;
  }
while_break:
  ;
}
