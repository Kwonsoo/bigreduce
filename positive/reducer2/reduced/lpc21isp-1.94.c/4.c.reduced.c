NxpDownload() {
  char uuencode_table[64];
  int i;
  i--;
  i = 1;
  while (1) {
    if (!(i < 64))
      goto while_break___3;
    airac_observe(uuencode_table, i);
    i++;
  }
while_break___3:
  ;
}
