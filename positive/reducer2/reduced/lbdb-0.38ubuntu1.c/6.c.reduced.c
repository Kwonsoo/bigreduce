int hdr[21];
main_next() {
  int i = 0;
  while (1) {
    if (main_next)
      goto while_break___0;
    i++;
  }
while_break___0:
  if (i < 20)
    airac_observe(hdr, i);
}
