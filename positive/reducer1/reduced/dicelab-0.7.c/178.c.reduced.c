struct prod__ {
  const *vtable__;
  int;
  char *filename__;
  long;
  int *symtab;
  enum ordering;
  int *expr;
};
struct YYNODESTATE_block {
  char data__[2048];
};
int yynodealloc_state___0;
void *yynodealloc_result__, *yynodealloc_tmp___49, *prod_create_tmp;
yynodealloc(p1) {
  yynodealloc_tmp___49 = malloc(sizeof(struct YYNODESTATE_block));
  yynodealloc_state___0 = yynodealloc_result__ =
      yynodealloc_tmp___49 + yynodealloc_state___0;
  yynodealloc_state___0 = yynodealloc_state___0 + p1;
  return yynodealloc_result__;
}

prod_create() {
  struct prod__ *node__;
  prod_create_tmp = yynodealloc(sizeof(struct prod__));
  node__ = prod_create_tmp;
  airac_observe(node__, 0);
}
