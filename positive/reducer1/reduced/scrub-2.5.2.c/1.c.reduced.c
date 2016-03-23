aes_gen_tables() {
  int i;
  char pow[256];
  i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(pow, i);
    i++;
  }
while_break:
  ;
}
