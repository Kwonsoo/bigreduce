double B[309];
main() {
  int i = 1;
  while (1) {
    if (!(i <= 50 + 1))
      goto while_break;
    airac_observe(B, i);
    i++;
  }
while_break:
  ;
}
