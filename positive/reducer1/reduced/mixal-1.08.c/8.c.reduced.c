int op_table___0[51];
int lookup_mnemonic_tmp;
lookup_mnemonic() {
  unsigned i = 0;
  while (1) {
    if (!(i < sizeof op_table___0 / sizeof 0))
      goto while_break;
    if (lookup_mnemonic_tmp)
      airac_observe(op_table___0, i);
    i++;
  }
while_break:
  ;
}
