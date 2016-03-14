int perm_0, hbCreateDecodeTables_j, getAndMoveToFrontDecode_nextSym;
hbCreateDecodeTables(int *p1) {
  *p1 = hbCreateDecodeTables_j++;
  hbCreateDecodeTables(&perm_0);
}

getAndMoveToFrontDecode() {
  char yy[256];
  int j;
  while (1) {
    j = getAndMoveToFrontDecode_nextSym;
    if (!(j > 3)) {
      if (!j)
        goto while_break___10;
      airac_observe(yy, j - 1);
      j--;
    }
  while_break___10:
    getAndMoveToFrontDecode_nextSym = perm_0;
  }
}
