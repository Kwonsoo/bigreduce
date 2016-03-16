struct {
  int substreams[256];
} typedef mpeg_demux_t;
mpegd_open_fp() {
  mpeg_demux_t *mpeg = malloc(sizeof(mpeg_demux_t));
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(mpeg->substreams, i);
    i++;
  }
while_break:
  ;
}
