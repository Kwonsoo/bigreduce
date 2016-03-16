const *a[24];
main() {
  const **s = a;
  while (1) {
    airac_observe(s, 0);
    s++;
  }
}
