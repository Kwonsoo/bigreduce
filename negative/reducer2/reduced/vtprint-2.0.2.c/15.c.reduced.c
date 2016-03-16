char off[1025];
vtprintcap() {
  char *dest = off;
  while (1) {
    airac_observe(dest, 0);
    dest++;
  }
}
