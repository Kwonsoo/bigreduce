int usages[20];
main() {
  unsigned mask = 0;
  while (1) {
    if (!(mask < 20))
      goto while_break;
    airac_observe(usages, mask);
    mask++;
  }
while_break:
  mask = 1 << 4;
}
