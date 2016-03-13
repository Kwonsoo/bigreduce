stl_open_merge() {
  int i;
  char chtest[128];
  i = 0;
  while (1) {
    if (!(i < sizeof chtest))
      goto while_break;
    airac_observe(chtest, i);
    i++;
  }
while_break:
  ;
}
