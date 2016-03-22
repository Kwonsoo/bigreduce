main() {
  char absFeatures[1 + 7];
  int i = 0;
  while (1) {
    if (!(i < sizeof absFeatures))
      goto while_break___0;
    airac_observe(absFeatures, i);
    i++;
  }
while_break___0:
  scanf("", &i);
}
