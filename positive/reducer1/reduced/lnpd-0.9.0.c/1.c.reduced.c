main() {
  char data[253];
  int i = 0;
  while (1) {
    if (!(i < sizeof data))
      goto while_break;
    airac_observe(data, i);
    i++;
  }
while_break:
  ;
}
