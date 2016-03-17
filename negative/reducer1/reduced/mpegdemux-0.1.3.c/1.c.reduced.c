struct {
  long ofs;
  unsigned buf_i;
  char buf[4096];
} typedef mpeg_demux_t;
void *a;
mpeg_demux_t *b;
mpegd_buffer_fill(mpeg_demux_t *mpeg) {
  unsigned i = 0;
  airac_observe(mpeg->buf, mpeg->buf_i + i);
}

mpegd_skip(mpeg_demux_t *mpeg, int n) { mpeg->ofs = mpeg->buf_i = n; }

mpegd_set_offset(mpeg_demux_t *mpeg, long ofs) {
  mpegd_skip(mpeg, ofs - mpeg->ofs);
  a = malloc(sizeof(mpeg_demux_t));
  b = a;
  b->ofs = mpegd_buffer_fill(a);
  mpegd_set_offset(a, 4);
}
