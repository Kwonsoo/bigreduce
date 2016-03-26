struct FileNames {
  struct FileNames *p;
} * getDirectory(), *fp, *getDirectory_fnp, *getDirectory_front;
void *getDirectory_tmp___0;
fileSelect() { fp = getDirectory(); }

struct FileNames *getDirectory() {
  getDirectory_fnp = getDirectory_front;
  getDirectory_tmp___0 = malloc(sizeof(struct FileNames));
  getDirectory_fnp->p = getDirectory_tmp___0;
  getDirectory_front = merge();
  return getDirectory_front;
}

file_key_down() {
  fp = fp->p;
  airac_observe(fp, 0);
}
