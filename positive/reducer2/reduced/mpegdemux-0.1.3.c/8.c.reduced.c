static fp[512];
mpeg_demux() {
  unsigned i = 0;
  while (1) {
    if (!(i < 512))
      goto while_break;
    airac_observe(fp, i);
    i++;
  }
while_break:
  ;
}
