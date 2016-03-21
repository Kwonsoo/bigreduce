CT_data() {
  int i;
  char apdu[300];
  while (1) {
    while (1) {
      if (!(i < 3))
        goto while_break___0;
      airac_observe(apdu, i);
      i++;
    }
  while_break___0:
    i = 0;
  }
}
