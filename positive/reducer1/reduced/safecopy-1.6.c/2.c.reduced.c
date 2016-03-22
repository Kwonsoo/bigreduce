printpercentage() {
  char percentage[16];
  unsigned tmp = 5;
  while (1) {
    if (tmp >= 16)
      goto while_break;
    airac_observe(percentage, tmp);
    tmp++;
  }
while_break:
  ;
}
