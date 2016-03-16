void *b;
main() {
  b = xalloc();
  int a = b;
  airac_observe(a, 0);
}
