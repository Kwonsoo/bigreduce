double u2d[309];
MCdevice_config() {
  int i = 1;
  while (1) {
    airac_observe(u2d, i);
    i++;
  }
}
