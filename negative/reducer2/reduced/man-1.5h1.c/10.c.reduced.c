struct filelist {
  struct filelist *next;
};
static a, d;
char b, c;
void *e;
char *my_malloc();
is_different(struct filelist *p) {
  p = p->next;
  b = my_malloc();
  p->next = b;
  airac_observe(p, 0);
}

different_man_file() { is_different(&a); }

fatal() { d = &c - my_malloc(d); }

char *my_malloc(n) {
  e = malloc(n);
  return e;
}
