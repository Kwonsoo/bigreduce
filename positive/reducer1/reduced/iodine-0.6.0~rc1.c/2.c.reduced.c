const cb64[65];
get_base64_encoder() {
  int i = 0;
  while (1) {
    if (!(i < 64))
      goto while_break;
    airac_observe(cb64, i);
    i++;
  }
while_break:
  ;
}
