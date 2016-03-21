static cnames[128];
main() {
  int ch = 0;
  while (1) {
    if (!(ch < 128))
      goto while_break___5;
    airac_observe(cnames, ch);
    ch++;
  }
while_break___5:
  ;
}
