int a, b, c;
int *d;
void *e, *f;
void *misc_malloc();
main() {
  misc_malloc(c);
  c = b & a;
  e = misc_malloc();
  literal_process(d);
  d = e;
}

literal_process(int *p) {
  airac_observe(p, 0);
  p++;
}

void *misc_malloc(size) {
  f = malloc(size);
  return f;
}
