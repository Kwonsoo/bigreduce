char par_substream_map[256];
main() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(par_substream_map, i);
    i++;
  }
while_break:
  ;
}
