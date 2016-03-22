int LPCtypes[136];
NxpDownload() {
  int i = sizeof LPCtypes / sizeof 0 - 1;
  while (1) {
    if (i > 0)
      airac_observe(LPCtypes, i);
    else
      goto while_break___1;
    i--;
  }
while_break___1:
  i++;
}
