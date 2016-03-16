struct {
  int streams[256];
} typedef mpeg_demux_t;
mpeg_demux_t mpeg_list_mpeg;
main() {
  mpeg_demux_t *mpeg = &mpeg_list_mpeg;
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(mpeg->streams, i);
    i++;
  }
while_break:
  ;
}
