int main_level, blockSize100k, last, allocateCompressStructures_n;
int *zptr;
void *allocateCompressStructures_tmp___1;
main() {
  spec_initbufs();
  spec_compress(0, 1, main_level);
  main_level += 2;
}

spec_initbufs() {
  blockSize100k = 9;
  allocateCompressStructures();
}

spec_compress(int p1, int p2, int p3) {
  blockSize100k = p3;
  {
    while (1)
      doReversibleTransformation();
  }
}

allocateCompressStructures() {
  allocateCompressStructures_n = 100000 * blockSize100k;
  allocateCompressStructures_tmp___1 =
      malloc(allocateCompressStructures_n * sizeof(int));
  zptr = allocateCompressStructures_tmp___1;
}

doReversibleTransformation() {
  int i;
  if (last < 4000) {
    i = 0;
    while (1) {
      if (!(i <= last))
        goto while_break___1;
      airac_observe(zptr, i);
      zptr = i++;
    }
  while_break___1:
    ;
  }
  last++;
}
