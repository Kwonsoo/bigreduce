struct {
  void (*function)();
} typedef dirstr;
int b, d, g;
dirstr *c;
char *e;
void *f;
char h, i;
unsigned char *misc_readitem();
readnumber(char *p) {
  while (1) {
    airac_observe(p, 0);
    p++;
  }
}

do_eacharg(p) { readnumber(p); }
dirstr a[] = {do_eacharg}

;
dot_process() {
  c = a;
  d = misc_readitem();
  e = d;
  c->function(e);
  misc_readitem(&b);
  e += b;
}

unsigned char *misc_readitem(int *lptr) {
  g = i & h;
  f = malloc(g);
  *lptr = g;
  return f;
}
