struct last__ {
  const *vtable__;
  int;
  char *filename__;
  long;
  int *symtab;
  enum ordering;
  int *expr1;
  int *expr2;
  enum type;
};
struct YYNODESTATE_block {
  char data__[2048];
};
int yynodealloc_state___0;
void *yynodealloc_result__, *yynodealloc_tmp___49, *last_create_tmp;
yynodealloc(p1) {
  yynodealloc_tmp___49 = malloc(sizeof(struct YYNODESTATE_block));
  yynodealloc_state___0 = yynodealloc_result__ =
      yynodealloc_tmp___49 + yynodealloc_state___0;
  yynodealloc_state___0 = yynodealloc_state___0 + p1;
  return yynodealloc_result__;
}

last_create() {
  struct last__ *node__;
  last_create_tmp = yynodealloc(sizeof(struct last__));
  node__ = last_create_tmp;
  airac_observe(node__, 0);
}
