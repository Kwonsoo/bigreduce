const dmtxPatternX[8];
GetPointFlow() {
  int patternIdx = 0;
  while (1) {
    if (!(patternIdx < 8))
      goto while_break___0;
    airac_observe(dmtxPatternX, patternIdx);
    patternIdx++;
  }
while_break___0:
  ;
}
