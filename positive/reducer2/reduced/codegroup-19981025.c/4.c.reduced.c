char groupbuf[6];
int ostore_x;
main() {
  int i = ostore_x;
  while (1) {
    if (!(i < 5))
      goto while_break;
    airac_observe(groupbuf, i);
    i++;
  }
while_break:
  ;
}
