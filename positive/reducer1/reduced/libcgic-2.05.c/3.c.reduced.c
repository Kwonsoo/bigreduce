enum { cgiFormEOF } ages[4];
int cgiFormSelectSingle_i, cgiFormSelectSingle_tmp;
main() {
  int ageChoice;
  cgiFormRadio("", ages, 4, &ageChoice, 0);
  airac_observe(ages, ageChoice);
}

cgiFormSelectSingle(int p1, int *p2) {
  while (1) {
    if (!(cgiFormSelectSingle_i < p1))
      goto while_break;
    if (cgiFormSelectSingle_tmp) {
      *p2 = cgiFormSelectSingle_i;
      return;
    }
    cgiFormSelectSingle_i++;
  }
while_break:
  ;
}

void cgiFormRadio(char name, char valuesText, int valuesTotal, int result,
                  int defaultV) {
  cgiFormSelectSingle(valuesTotal, result);
}
