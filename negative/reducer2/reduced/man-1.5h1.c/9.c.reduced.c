char a, b;
int c;
void *d;
char *my_malloc();
is_different(p) {
  a = my_malloc();
  airac_observe(p, 0);
  p = a;
}

fatal() { c = &b - my_malloc(c); }

char *my_malloc(n) {
  d = malloc(n);
  return d;
}
