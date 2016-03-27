struct FileNames {
  struct FileNames *p;
} * getDirectory(), *fp, *getDirectory_front, *getDirectory_tmp___4, **pages;
void *fileSelect_tmp___1, *getDirectory_tmp;
struct FileNames *merge();
fileSelect() {
  fp = getDirectory();
  fileSelect_tmp___1 = malloc(0);
  pages = fileSelect_tmp___1;
  *pages = fp;
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

file_key_up() {
  struct FileNames *tp = *pages;
  airac_observe(tp, 0);
}
