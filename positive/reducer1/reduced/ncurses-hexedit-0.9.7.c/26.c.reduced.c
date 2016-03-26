struct FileNames {
  struct FileNames *p;
} * getDirectory(), *fp, *getDirectory_front, *getDirectory_tmp___4;
void *getDirectory_tmp;
struct FileNames *merge();
fileSelect() {
  fp = getDirectory();
  airac_observe(fp, 0);
}

struct FileNames *getDirectory() {
  getDirectory_tmp = malloc(sizeof(struct FileNames));
  getDirectory_front = getDirectory_tmp;
  getDirectory_tmp___4 = msort();
  getDirectory_front = merge(getDirectory_tmp___4);
  return getDirectory_front;
}

struct FileNames *merge(p1) {
  return p1;
}
