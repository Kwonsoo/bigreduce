int origPtr;
undoReversibleTransformation_small() {
  int cftab[257];
  int i = 1;
  while (1) {
    if (!(i <= 256))
      goto while_break___0;
    airac_observe(cftab, i - 1);
    i++;
  }
while_break___0:
  i = origPtr;
}
