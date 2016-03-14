int *ftab;
void *allocateCompressStructures_tmp___2;
allocateCompressStructures() {
  allocateCompressStructures_tmp___2 = malloc(65537 * sizeof(int));
  ftab = allocateCompressStructures_tmp___2;
  int i = 1;
  while (1) {
    if (!(i <= 65536))
      goto while_break___5;
    airac_observe(ftab, i - 1);
    i++;
  }
while_break___5:
  i = 0;
}
