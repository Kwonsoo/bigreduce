long FSb[256];
aes_gen_tables() {
  int i = 1;
  while (1) {
    if (!(i < 256))
      goto while_break___1;
    airac_observe(FSb, i);
    i++;
  }
while_break___1:
  i = 0;
}
