int optind;
main() {
  int flist[3];
  int i;
  if (optind == 3)
    goto case_1;
case_1:
  i = 0;
  while (1) {
    if (!(i < optind))
      goto while_break;
    airac_observe(flist, i);
    i++;
  }
while_break:
  ;
}
