DecodeSchemeX12() {
  int i;
  int x12Values[3];
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break___0;
    airac_observe(x12Values, i);
    i++;
  }
while_break___0:
  ;
}
