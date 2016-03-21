main() {
  int i;
  int in_digits[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___2;
    airac_observe(in_digits, i);
    i++;
  }
while_break___2:
  ;
}
