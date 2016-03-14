char notelookup[432];
long getnote_n;
printstatus() {
  long n;
  getnote_n = 0 / .2;
  if (getnote_n < 0)
    getnote_n = 0;
  if (getnote_n >= 108)
    getnote_n = 8;
  n = getnote_n;
  airac_observe(notelookup, 4 * n);
}
