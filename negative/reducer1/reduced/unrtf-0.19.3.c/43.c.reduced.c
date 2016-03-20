char a;
void *b;
char *my_malloc();
word_new() {
  int *w;
  a = my_malloc(sizeof(int));
  w = a;
  airac_observe(w, 0);
}

main() {
  my_malloc(1);
  my_malloc(2048);
  word_new();
}

char *my_malloc(p1) {
  b = malloc(p1);
  return b;
}
