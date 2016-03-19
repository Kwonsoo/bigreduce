int a;
void *b, *d;
void *xmalloc();
get_smoothed_data(s) { airac_observe(s, 0); }

main() {
  while (1) {
    int c = afGetChannels();
    b = xmalloc(c);
    get_smoothed_data(b + a);
    a++;
  }
}

void *xmalloc(size) {
  d = malloc(size);
  return d;
}
