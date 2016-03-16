struct manpage {
  struct manpage *next;
};
char a, b, d;
struct filelist *c;
int e;
void *f;
struct filelist {
  struct filelist *next;
} append(struct manpage **p1) {
  struct manpage *p = *p1;
  p = p->next;
  airac_observe(p, 0);
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

char *my_malloc(p1) {
  f = malloc(p1);
  return f;
}
