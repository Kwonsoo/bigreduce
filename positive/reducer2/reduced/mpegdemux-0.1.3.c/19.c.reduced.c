char par_substream[256];
main() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < 256))
      goto while_break___1;
    airac_observe(par_substream, i___0);
    i___0++;
  }
while_break___1:
  ;
}
