char par_substream[256];
main() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(par_substream, i);
    i++;
  }
while_break:
  ;
}
