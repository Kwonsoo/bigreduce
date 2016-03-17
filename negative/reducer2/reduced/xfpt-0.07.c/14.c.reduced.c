struct {
  void (*function)();
} typedef dirstr;
short a;
int c, e, h;
dirstr *d;
char *f;
void *g;
char i, j;
unsigned char *misc_readitem();
readnumber(char *p) {
  while (1) {
    if (a)
      goto while_break___0;
    p++;
  }
while_break___0:
  airac_observe(p, 0);
}

do_eacharg(p) { readnumber(p); }
dirstr b[] = {do_eacharg}

;
dot_process() {
  d = b;
  e = misc_readitem();
  f = e;
  d->function(f);
  misc_readitem(&c);
  f += c;
}

unsigned char *misc_readitem(int *lptr) {
  h = j & i;
  g = malloc(h);
  *lptr = h;
  return g;
}
