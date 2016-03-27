struct FileNames {
  struct FileNames *p;
} * getDirectory(), *a, *d, *f, **b;
void *c, *e;
struct FileNames *merge();
fileSelect() {
  a = getDirectory();
  c = malloc(0);
  b = c;
  *b = a;
}

struct FileNames *getDirectory() {
  e = malloc(sizeof(struct FileNames));
  d = e;
  f = msort();
  d = merge(f);
  return d;
}

struct FileNames *merge(p2) {
  return p2;
}

printPage(fp___0) {
  airac_observe(fp___0, 0);
  printPage(*b);
}
