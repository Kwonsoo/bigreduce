struct selem {
  char digit[8];
};
unsigned parseInsert_tmp;
parseInsert() {
  struct selem *newelem;
  char a;
  parseInsert_tmp = malloc(sizeof(struct selem));
  newelem = parseInsert_tmp;
  a = 0;
  while (1) {
    if (!(a < 8))
      goto while_break___0;
    airac_observe(newelem->digit, a);
    a = a + 1;
  }
while_break___0:
  ;
}
