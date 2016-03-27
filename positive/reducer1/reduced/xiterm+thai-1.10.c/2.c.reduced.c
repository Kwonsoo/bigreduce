short TermWin_1;
int szHint_3 = 80;
long thai_compare___lengthofcol_d;
void *thai_compare_tmp___0;
main() {
  TermWin_1 = szHint_3;
  szHint_3 = thai_compare();
}

thai_compare() {
  int i;
  int *col_d;
  thai_compare___lengthofcol_d = 2 * TermWin_1 + 4;
  thai_compare_tmp___0 =
      __builtin_alloca(sizeof *col_d * thai_compare___lengthofcol_d);
  col_d = thai_compare_tmp___0;
  i = 2 * TermWin_1 + 4;
  while (1) {
    if (!(i > 0))
      goto while_break;
    i--;
    airac_observe(col_d, i);
  }
while_break:
  ;
}
