int symbol_table[17];
int symbol_table_0;
for_each_symbol_s() {
  unsigned i = 0;
  while (1) {
    if (!(i < sizeof symbol_table / sizeof symbol_table_0))
      goto while_break;
    airac_observe(symbol_table, i);
    if (for_each_symbol_s)
      i++;
  }
while_break:
  ;
}
