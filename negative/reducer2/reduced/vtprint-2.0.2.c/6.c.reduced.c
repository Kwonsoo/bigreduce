char off[1025];
vtprintcap() {
  char *probe = off;
  while (1) {
    probe++;
    airac_observe(probe, 0);
    probe--;
    probe++;
  }
}
