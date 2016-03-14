int origPtr;
doReversibleTransformation() { origPtr = -1; }

undoReversibleTransformation_small() {
  int cftab[257];
  int i = 0;
  while (1) {
    if (!(i <= 256))
      goto while_break___1;
    airac_observe(cftab, i);
    i++;
  }
while_break___1:
  i = origPtr;
}
