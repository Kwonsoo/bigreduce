void *xmalloc_p;
int allocated_length;
char name_gather_tmp___1;
xstrdup() { xmalloc(1); }

xmalloc(p1) { xmalloc_p = malloc(p1); }

new_exclude() {
  int ex = xmalloc_p;
  airac_observe(ex, 0);
  xmalloc(sizeof(char *));
}

name_gather() {
  allocated_length = sizeof 0;
  xmalloc(allocated_length);
  name_gather_tmp___1 = xstrdup();
}
