int *table;
void *init_hash_tmp;
init_hash() {
  int i;
  init_hash_tmp = malloc(1009 * sizeof(int));
  table = init_hash_tmp;
  i = 0;
  while (1) {
    if (!(i < 1009))
      goto while_break___1;
    airac_observe(table, i);
    i++;
  }
while_break___1:
  ;
}
