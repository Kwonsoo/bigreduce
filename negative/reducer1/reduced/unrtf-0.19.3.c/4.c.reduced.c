struct _w {
  struct _w *child;
} * c;
char a;
int b;
void *d;
char *my_malloc();
my_getchar() {
  b = 2048;
  my_malloc(b);
}

word_read() {
  my_malloc(1);
  my_getchar();
  a = my_malloc();
  return a;
}

main() {
  c = word_read();
  int w = c;
  airac_observe(w, 0);
}

char *my_malloc(p1) {
  d = malloc(p1);
  return d;
}
