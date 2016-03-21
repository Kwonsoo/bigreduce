static cnames[128];
main() {
  int ch = 0;
  while (1) {
    if (!(ch <= 32))
      goto while_break___2;
    airac_observe(cnames, ch);
    ch++;
  }
while_break___2:
  ;
}
