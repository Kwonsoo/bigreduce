static cnames[128];
main() {
  int ch = 7;
  while (1) {
    if (!(ch < 14))
      goto while_break___0;
    airac_observe(cnames, ch);
    ch++;
  }
while_break___0:
  ch = 0;
}
