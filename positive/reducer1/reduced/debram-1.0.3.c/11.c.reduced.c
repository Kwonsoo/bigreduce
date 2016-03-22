char zero_ram[5];
parse_cl() {
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(zero_ram, i);
    i++;
  }
while_break:
  ;
}
