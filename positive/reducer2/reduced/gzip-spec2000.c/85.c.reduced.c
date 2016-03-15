int extra_dbits[30];
ct_tally() {
  int dcode = 0;
  while (1) {
    if (!(dcode < 30))
      goto while_break;
    airac_observe(extra_dbits, dcode);
    dcode++;
  }
while_break:
  ;
}
