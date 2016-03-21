main() {
  char includeGuard[19];
  int i = 2;
  while (1) {
    if (!(i < sizeof includeGuard))
      goto while_break;
    airac_observe(includeGuard, i);
    i++;
  }
while_break:
  ;
}
