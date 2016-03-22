cdb_make_finish_internal() {
  int hcnt[256];
  unsigned t = 0;
  while (1) {
    if (!(t < 256))
      while (1)
        ;
    airac_observe(hcnt, t);
    t++;
  }
}
