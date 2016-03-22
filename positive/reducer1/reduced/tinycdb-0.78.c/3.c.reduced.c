cdb_make_finish_internal() {
  int hcnt[256];
  unsigned t = 0;
  while (1) {
    if (!(t < 256))
      goto while_break___1;
    airac_observe(hcnt, t);
    t++;
  }
while_break___1:
  ;
}
