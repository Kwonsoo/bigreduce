char shuffle_table[256];
hash_init() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(shuffle_table, i);
    i++;
  }
while_break:
  ;
}
