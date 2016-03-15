struct {
  char prognames;
} typedef LakaiProgramList;
char a;
main(int handle, LakaiProgramList *lp) {
  lp->prognames = malloc(13);
  lakai_akaitoascii(2, lp->prognames, 12);
}

lakai_akaitoascii(char *src, char *dst, int len) {
  int i = 0;
  while (1) {
    if (!(i < len))
      ;
    else if (a)
      airac_observe(dst, i);
    i++;
  }
}
