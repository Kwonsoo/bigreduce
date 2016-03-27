struct FileNames {
  struct FileNames *p;
} * getDirectory(), *fp, *getDirectory_front, *getDirectory_tmp___3;
void *getDirectory_tmp;
struct FileNames *merge();
fileSelect() { fp = getDirectory(); }

struct FileNames *getDirectory() {
  getDirectory_tmp = malloc(sizeof(struct FileNames));
  getDirectory_front = getDirectory_tmp;
  getDirectory_tmp___3 = msort();
  getDirectory_front = merge(getDirectory_tmp___3);
  return getDirectory_front;
}

struct FileNames *merge(p2) {
  return p2;
}

file_end() { airac_observe(fp, 0); }
