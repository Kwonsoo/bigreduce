struct {
  int string;
} typedef argstr;
argstr *a, *b;
int c[1];
int d, f, g, h, i;
void *e;
int *misc_readitem();
para_process(p1) {
  b = b->string = misc_readitem(d);
  para_process(c);
  d = p1;
}

read_nextline() {
  if (a == 0) {
    int *p = a->string;
    while (1) {
      airac_observe(p, 0);
      p++;
    }
  }
}

misc_readstring(int *p1, int *p2) {
  g = p1;
  f = p1 - p1;
  *p2 = f;
  e = malloc(f);
  g = e;
  return g;
}

int *misc_readitem(int *p1) {
  h = misc_readstring(p1, &i);
  p1 += i;
  return h;
}
