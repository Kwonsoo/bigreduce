long RT1[256];
aes_gen_tables() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___2;
    airac_observe(RT1, i);
    i++;
  }
while_break___2:
  ;
}
