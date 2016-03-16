char par_stream[256];
main() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___2;
    airac_observe(par_stream, i);
    i++;
  }
while_break___2:
  ;
}
