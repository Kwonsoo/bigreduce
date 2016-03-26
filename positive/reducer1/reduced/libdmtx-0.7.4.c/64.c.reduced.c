GetPointFlow_colorPlane() {
  int compass;
  int mag[4];
  compass = 0;
  while (1) {
    if (!(compass < 4))
      goto while_break___1;
    airac_observe(mag, compass);
    compass++;
  }
while_break___1:
  ;
}
