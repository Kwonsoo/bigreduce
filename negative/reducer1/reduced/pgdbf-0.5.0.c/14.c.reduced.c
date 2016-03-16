int optind, main_fieldcount;
static RESERVEDWORDS[76];
main() {
  int i;
  if (main_fieldcount)
    goto while_break___3;
  i = 0;
  while (1) {
    airac_observe(RESERVEDWORDS, i);
    i++;
  }
while_break___3:
  i = optind;
}
