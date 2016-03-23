long RCON[10];
aes_gen_tables() {
  int i = 0;
  while (1) {
    if (!(i < 10))
      goto while_break___0;
    airac_observe(RCON, i);
    i++;
  }
while_break___0:
  ;
}
