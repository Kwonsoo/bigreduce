char a[432];
long b;
main() {
  char *s;
  while (1) {
    if (!(b < 108))
      goto while_break;
    s = a + 4 * b;
    airac_observe(s, 0);
    b++;
  }
while_break:
  ;
}
