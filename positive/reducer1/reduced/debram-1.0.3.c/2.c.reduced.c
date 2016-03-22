xref_pass() {
  int up[5];
  unsigned tmp = 2;
  while (1) {
    if (tmp >= 5)
      goto while_break;
    airac_observe(up, tmp);
    tmp++;
  }
while_break:
  ;
}
