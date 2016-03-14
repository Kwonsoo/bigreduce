char a[256];
out32(dbuf) {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break;
    airac_observe(dbuf, i);
    i++;
  }
while_break:
  ;
}

main() {
  out32(a);
  out32(a + 1);
}
