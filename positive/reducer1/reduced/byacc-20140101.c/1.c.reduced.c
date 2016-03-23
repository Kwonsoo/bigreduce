static a, b;
void *c;
hash(name) { airac_observe(name, 0); }

lookup(name) {
  hash(name);
  hash("error");
  b = 6;
  while (1) {
    b += 6;
    c = realloc(a, b);
    lookup(c);
  }
}
