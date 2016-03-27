int szHint_3 = 80, thai_compare_ptr_d;
long thai_compare___lengthofcol;
void *thai_compare_tmp;
main() { szHint_3 = thai_compare(); }

thai_compare() {
  int i;
  int *col;
  thai_compare___lengthofcol = szHint_3 + 1;
  thai_compare_tmp = __builtin_alloca(sizeof *col * thai_compare___lengthofcol);
  col = thai_compare_tmp;
  i = szHint_3;
  i = 0;
  while (1) {
    if (!(i < szHint_3))
      goto while_break___0;
    airac_observe(col, i);
    thai_compare_ptr_d = i++;
  }
while_break___0:
  ;
}
