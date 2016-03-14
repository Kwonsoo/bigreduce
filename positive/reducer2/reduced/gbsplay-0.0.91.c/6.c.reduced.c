char a[80];
long b;
main() {
  long j;
  char *s;
  while (1) {
    if (!(b < 16))
      goto while_break;
    s = a + 5 * b;
    j = 0;
    while (1) {
      if (!(j < 4))
        goto while_break___0;
      airac_observe(s, j);
      j++;
    }
  while_break___0:
    b++;
  }
while_break:
  ;
}
