int LPCtypes[136];
NxpDownload_endPtr() {
  int i;
  if (NxpDownload_endPtr) {
    i = sizeof LPCtypes / sizeof 0 - 1;
    while (1) {
      if (i > 0)
        airac_observe(LPCtypes, i);
      i--;
    }
  }
  i++;
}
