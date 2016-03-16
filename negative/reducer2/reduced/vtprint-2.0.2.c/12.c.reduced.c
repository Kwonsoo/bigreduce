short escape_tmp;
char off[1025];
vtprintcap() {
  char *probe = off;
  while (1) {
    probe++;
    airac_observe(probe, 0);
    if (escape_tmp)
      probe--;
  }
}
