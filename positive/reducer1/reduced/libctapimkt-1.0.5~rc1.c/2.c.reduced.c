char frage[300];
CT_data() {
  int i;
  while (1) {
    while (1) {
      if (!(i < 3))
        goto while_break___0;
      airac_observe(frage, i);
      i++;
    }
  while_break___0:
    i = 0;
  }
}
