main() {
  char relFeatures[1 + 1];
  int i = 0;
  while (1) {
    if (!(i < sizeof relFeatures))
      goto while_break___1;
    airac_observe(relFeatures, i);
    i++;
  }
while_break___1:
  scanf("", &i);
}
