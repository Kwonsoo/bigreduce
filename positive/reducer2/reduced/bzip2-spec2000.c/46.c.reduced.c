int *ftab;
void *allocateCompressStructures_tmp___2;
allocateCompressStructures() {
  allocateCompressStructures_tmp___2 = malloc(65537 * sizeof(int));
  ftab = allocateCompressStructures_tmp___2;
  int i = 0;
  while (1) {
    if (!(i <= 65536))
      goto while_break___3;
    airac_observe(ftab, i);
    i++;
  }
while_break___3:
  ;
}
