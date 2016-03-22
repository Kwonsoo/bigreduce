int types[8];
main() {
  char i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(types, i);
    i = i + 1;
  }
while_break:
  ;
}
