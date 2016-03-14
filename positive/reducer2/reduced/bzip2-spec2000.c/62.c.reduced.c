int main_level, blockSize100k, last, allocateCompressStructures_n,
    loadAndRLEsource_allowableBlockSize;
char *block;
void *allocateCompressStructures_tmp;
main() {
  spec_initbufs();
  while (1) {
    if (!(main_level <= 9))
      goto while_break___0;
    spec_compress(0, 1, main_level);
    main_level += 2;
  }
while_break___0:
  ;
}

spec_initbufs() {
  blockSize100k = 9;
  allocateCompressStructures();
}

spec_compress(int p1, int p2, int p3) {
  blockSize100k = p3;
  compressStream();
}

allocateCompressStructures() {
  allocateCompressStructures_n = 100000 * blockSize100k;
  allocateCompressStructures_tmp =
      malloc(allocateCompressStructures_n + 1 + 20);
  block = allocateCompressStructures_tmp;
  block++;
}

compressStream() {
  last = -1;
  loadAndRLEsource_allowableBlockSize = 100000 * blockSize100k - 20;
  while (1)
    if (last < loadAndRLEsource_allowableBlockSize) {
      last++;
      last++;
      airac_observe(block, last);
    }
}
