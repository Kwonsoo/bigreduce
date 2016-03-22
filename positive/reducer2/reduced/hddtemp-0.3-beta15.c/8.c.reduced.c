int bus[5];
main() {
  int j = 0;
  while (1) {
    if (!(j < 5))
      goto while_break___2;
    airac_observe(bus, j);
    j++;
  }
while_break___2:
  ;
}
