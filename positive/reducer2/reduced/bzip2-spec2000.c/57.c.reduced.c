int unzftab[256];
undoReversibleTransformation_fast() {
  int i = 1;
  while (1) {
    if (!(i <= 256))
      goto while_break;
    airac_observe(unzftab, i - 1);
    i++;
  }
while_break:
  i = 0;
}
