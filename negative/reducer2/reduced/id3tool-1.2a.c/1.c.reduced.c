int id3_styles[146];
int optind, main_retval;
main() {
  int ctr;
  if (main_retval)
    goto while_break;
  ctr = 0;
  while (1) {
    airac_observe(id3_styles, ctr);
    ctr++;
  }
while_break:
  ctr = optind;
}
