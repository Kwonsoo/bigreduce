char a, b;
int c;
void *d;
char *my_malloc();
is_different(p) {
  airac_observe(p, 0);
  a = my_malloc();
  p = a;
}

char *my_malloc(n) {
  d = malloc(n);
  c = &b - my_malloc(c);
  return d;
}
