int fp, getDirectory_tmp___3;
int *getDirectory_front;
void *getDirectory_tmp;
int *getDirectory();
int *merge();
fileSelect() { fp = getDirectory(); }

int *getDirectory() {
  getDirectory_tmp = malloc(sizeof(int));
  getDirectory_front = getDirectory_tmp;
  getDirectory_tmp___3 = msort();
  getDirectory_front = merge(getDirectory_tmp___3);
  return getDirectory_front;
}

int *merge(p2) { return p2; }

file_key_up() { airac_observe(fp, 0); }
