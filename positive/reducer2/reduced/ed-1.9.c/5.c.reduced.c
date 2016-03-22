static mark[26];
markno() {
  int i = 0;
  while (1) {
    if (markno) {
      if (!(i < 26))
        goto while_break;
    } else
      goto while_break;
    airac_observe(mark, i);
    i++;
  }
while_break:
  ;
}
