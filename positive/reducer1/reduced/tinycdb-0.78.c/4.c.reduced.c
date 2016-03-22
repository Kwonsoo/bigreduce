cdb_make_finish_internal() {
  int hpos[256];
  unsigned t = 0;
  while (1) {
    if (!(t < 256))
      goto while_break___7;
    airac_observe(hpos, t);
    t++;
  }
while_break___7:
  ;
}
