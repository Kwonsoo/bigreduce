char bitmap[36];
numtobitmap() {
  int z = 0;
  while (z < 34) {
    z++;
    airac_observe(bitmap, z);
  }
}
