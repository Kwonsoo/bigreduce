int base_length[29];
ct_init() {
  int code = 0;
  while (1) {
    if (!(code < 28))
      goto while_break;
    airac_observe(base_length, code);
    code++;
  }
while_break:
  ;
}
