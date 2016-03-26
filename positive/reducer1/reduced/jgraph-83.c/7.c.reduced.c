char PATTERNS[3];
int NPATTERNS = 3;
main() {
  while (1) {
    int i;
    if (NPATTERNS)
      i = 0;
    if (!(i < NPATTERNS))
      goto while_break___0;
    airac_observe(PATTERNS, i);
    i++;
  while_break___0:
    ;
  }
}
