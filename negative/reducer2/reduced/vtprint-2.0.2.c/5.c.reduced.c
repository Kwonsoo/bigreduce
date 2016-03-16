char off[1025];
vtprintcap() {
  char *probe = off;
  while (1) {
    airac_observe(probe, 0);
    probe++;
    probe--;
    probe++;
  }
}
