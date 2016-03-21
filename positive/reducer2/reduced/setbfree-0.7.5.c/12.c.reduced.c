int ipold[4];
preIpolMixer() {
  int row = 0;
  while (1) {
    if (!(row < 4))
      goto while_break;
    airac_observe(ipold, row);
    row++;
  }
while_break:
  ;
}
