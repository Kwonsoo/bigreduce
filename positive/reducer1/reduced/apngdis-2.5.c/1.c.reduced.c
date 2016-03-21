char trns[256];
LoadAPNG() {
  int i = 0;
  while (1) {
    if (i < 256)
      airac_observe(trns, i);
    i++;
  }
}
