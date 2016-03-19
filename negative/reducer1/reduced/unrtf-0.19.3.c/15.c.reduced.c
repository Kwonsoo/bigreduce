char op_create_tmp;
long current_max_length = 1;
int read_word_ch;
void *my_malloc_tmp;
char *my_malloc();
int *op_create() {
  op_create_tmp = my_malloc(sizeof(int));
  return op_create_tmp;
}

main() {
  while (read_word_ch)
    current_max_length *= 2;
  my_malloc(current_max_length);
  int text_op = op_create();
  airac_observe(text_op, 0);
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}
