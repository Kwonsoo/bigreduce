struct manpage {
  struct manpage *next;
};
struct filelist {
  struct filelist *next;
} * c;
char a, b, d;
int e, f;
struct globval *g;
void *h, *i;
struct globval {
  struct globval *next;
} append(struct manpage **p1) {
  struct manpage *p;
  if (p1) {
    p = *p1;
    while (1) {
      airac_observe(p, 0);
      p = p->next;
    }
  }
  glob_filename();
}

manfile_from_section() {
  if (a == 0)
    append(&a);
}

char *my_malloc();
is_different() {
  c = b = my_malloc();
  c->next = b;
}

fatal() { e = &d - my_malloc(e); }

glob_filename() {
  h = __builtin_alloca(sizeof(struct globval));
  g = h;
  g->next = f;
}

char *my_malloc(p1) {
  i = malloc(p1);
  fatal();
  return i;
}
