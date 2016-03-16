char on[1025];
vtprintcap() {
  char *dest = on;
  while (1) {
    airac_observe(dest, 0);
    dest++;
  }
}
