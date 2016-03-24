int **symbol_table;
void *create_symbol_table_tmp;
create_symbol_table() {
  int i;
  create_symbol_table_tmp = malloc(1024 * sizeof(int *));
  symbol_table = create_symbol_table_tmp;
  i = 0;
  while (1) {
    if (!(i < 1024))
      goto while_break;
    airac_observe(symbol_table, i);
    i++;
  }
while_break:
  ;
}
