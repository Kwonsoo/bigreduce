char on[1025];
vtprintcap() {
  char *probe = on;
  while (1) {
    airac_observe(probe, 0);
    if (probe)
      probe--;
    probe++;
  }
}
