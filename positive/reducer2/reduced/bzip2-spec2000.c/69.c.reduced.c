int main_level, blockSize100k, last, allocateCompressStructures_n,
    allocateCompressStructures_allowableBlockSize;
char *block;
void *allocateCompressStructures_tmp;
main() {
  spec_initbufs();
  spec_compress(0, 1, main_level);
  main_level += 2;
}

spec_initbufs() {
  blockSize100k = 9;
  allocateCompressStructures();
}

spec_compress(int p1, int p2, int p3) { blockSize100k = p3; }

allocateCompressStructures() {
  allocateCompressStructures_n = 100000 * blockSize100k;
  allocateCompressStructures_tmp =
      malloc(allocateCompressStructures_n + 1 + 20);
  block = allocateCompressStructures_tmp;
  block++;
  last = -1;
  allocateCompressStructures_allowableBlockSize = 100000 * blockSize100k - 20;
  while (last < allocateCompressStructures_allowableBlockSize) {
    last++;
    last++;
    last++;
    last++;
    airac_observe(block, last);
  }
}
