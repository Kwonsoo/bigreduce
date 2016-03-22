const eMonths[13];
setDate() {
  const arr = eMonths;
  int i = 0;
  while (1) {
    if (!(i < 13))
      goto while_break;
    airac_observe(arr, i);
    i++;
  }
while_break:
  ;
}
