double N_D[309];
MCdevice_config() {
  int i = 1;
  while (1) {
    airac_observe(N_D, i);
    i++;
  }
}
