dmtxRegionScanPixel() {
  int compass;
  int mag[4];
  compass = 0;
  while (1) {
    if (!(compass < 4))
      while (1)
        ;
    if (compass)
      airac_observe(mag, compass);
    compass++;
  }
}
