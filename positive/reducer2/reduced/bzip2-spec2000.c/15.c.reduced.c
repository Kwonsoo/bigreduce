char unseqToSeq[256];
makeMaps() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(unseqToSeq, i);
    i++;
  }
while_break:
  ;
}
