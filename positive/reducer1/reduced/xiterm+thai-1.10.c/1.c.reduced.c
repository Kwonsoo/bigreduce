short TermWin_1;
int szHint_3 = 80;
long thai_compare___lengthofcol_s;
void *thai_compare_tmp___1;
main() {
  TermWin_1 = szHint_3;
  szHint_3 = thai_compare();
}

thai_compare() {
  int i;
  int *col_s;
  thai_compare___lengthofcol_s = 2 * TermWin_1 + 4;
  thai_compare_tmp___1 =
      __builtin_alloca(sizeof *col_s * thai_compare___lengthofcol_s);
  col_s = thai_compare_tmp___1;
  i = 2 * TermWin_1 + 4;
  while (1) {
    if (!(i > 0))
      goto while_break;
    i--;
    airac_observe(col_s, i);
  }
while_break:
  ;
}
