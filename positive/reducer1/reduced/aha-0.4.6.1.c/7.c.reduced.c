parseInsert() {
  char digit[8];
  char digitcount;
  while (1) {
    if (digitcount <= 0)
      digitcount = 0;
    if (digitcount < 8)
      airac_observe(digit, digitcount);
    digitcount = digitcount + 1;
  }
}
