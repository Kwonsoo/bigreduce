mpeg_demux_copy_spu() {
  unsigned i;
  char buf[8];
  i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break___0;
    airac_observe(buf, 7 - i);
    i++;
  }
while_break___0:
  ;
}
