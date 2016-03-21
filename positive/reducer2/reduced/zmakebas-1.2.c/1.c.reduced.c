char headerbuf[17];
main() {
  int f = -1;
  f = 0;
  while (1) {
    if (!(f < 17))
      goto while_break___16;
    airac_observe(headerbuf, f);
    f++;
  }
while_break___16:
  ;
}
