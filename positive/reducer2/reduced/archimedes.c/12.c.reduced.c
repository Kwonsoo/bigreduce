double u2d[309];
main() {
  int i = 1;
  while (1) {
    if (!(i <= 50 + 1))
      goto while_break;
    airac_observe(u2d, i);
    i++;
  }
while_break:
  ;
}
