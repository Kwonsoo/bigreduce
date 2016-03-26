const cb128[129];
get_base128_encoder() {
  int i = 0;
  while (1) {
    if (!(i < 128))
      goto while_break;
    airac_observe(cb128, i);
    i++;
  }
while_break:
  ;
}
