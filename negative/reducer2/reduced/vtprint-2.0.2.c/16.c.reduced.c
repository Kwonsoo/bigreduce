char on[1025];
vtprintcap() {
  char *probe = on;
  while (1) {
    probe++;
    airac_observe(probe, 0);
    probe--;
    probe++;
  }
}
