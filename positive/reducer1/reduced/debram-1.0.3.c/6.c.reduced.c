struct {
  char xref[14];
} datum;
xref_pass() {
  int i = 0;
  while (i < 13) {
    airac_observe(datum.xref, i);
    i++;
  }
}
