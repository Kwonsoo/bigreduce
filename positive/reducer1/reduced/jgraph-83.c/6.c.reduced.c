char PATTERNS[3];
int NPATTERNS = 3;
main() {
  int i = 0;
  while (1) {
    if (!(i < NPATTERNS))
      goto while_break;
    airac_observe(PATTERNS, i);
    i = NPATTERNS;
  }
while_break:
  ;
}
