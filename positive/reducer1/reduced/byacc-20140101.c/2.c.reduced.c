static a, b;
void *c;
hash(p1) {
  char *s = p1;
  airac_observe(s, 0);
  s++;
}

lookup(p1) {
  hash(p1);
  hash("error");
  b = 6;
  while (1) {
    b += 6;
    c = realloc(a, b);
    lookup(c);
  }
}
