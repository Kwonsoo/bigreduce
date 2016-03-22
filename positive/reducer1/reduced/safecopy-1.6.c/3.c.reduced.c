markbadblocks() {
  char nullmarker[8];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 8)
      goto while_break;
    airac_observe(nullmarker, tmp);
    tmp++;
  }
while_break:
  ;
}
