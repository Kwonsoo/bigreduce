char op_create_tmp;
long current_max_length = 1;
void *my_malloc_tmp;
char *my_malloc();
vt_init() {
  int *vt_op;
  op_create_tmp = my_malloc(sizeof(int));
  vt_op = op_create_tmp;
  airac_observe(vt_op, 0);
}

main() {
  vt_init();
  while (1) {
    current_max_length *= 2;
    my_malloc(current_max_length);
  }
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}
