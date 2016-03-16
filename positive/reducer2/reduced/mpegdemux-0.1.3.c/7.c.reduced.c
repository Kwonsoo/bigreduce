long pts2[256];
mpeg_scan() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(pts2, i);
    i++;
  }
while_break:
  ;
}
