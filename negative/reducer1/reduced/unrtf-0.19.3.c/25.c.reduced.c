char op_create_tmp;
long current_max_length = 1;
void *my_malloc_tmp;
char *my_malloc();
wpml_init() {
  int *wpml_op;
  op_create_tmp = my_malloc(sizeof(int));
  wpml_op = op_create_tmp;
  airac_observe(wpml_op, 0);
}

main() {
  wpml_init();
  while (1) {
    current_max_length *= 2;
    my_malloc(current_max_length);
  }
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}
