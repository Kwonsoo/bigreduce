main() {
  char ffFeatures[1 + 15];
  int i = 0;
  while (1) {
    if (!(i < sizeof ffFeatures))
      goto while_break___2;
    airac_observe(ffFeatures, i);
    i++;
  }
while_break___2:
  scanf("", &i);
}
