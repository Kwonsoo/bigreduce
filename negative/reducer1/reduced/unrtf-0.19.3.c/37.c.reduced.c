struct __anonstruct_OutputPersonality_23 {
  char;
  char;
  char;
  short;
} * op;
char op_create_tmp;
int buffer_size;
void *my_malloc_tmp;
char *my_malloc();
my_getchar() {
  while (1) {
    buffer_size = 2048;
    my_malloc(buffer_size);
  }
}

word_read() {
  my_getchar();
  my_malloc(sizeof(int));
}

wpml_init() {
  op_create_tmp = my_malloc();
  return op_create_tmp;
}

main() {
  op = wpml_init();
  word_read();
  struct __anonstruct_OutputPersonality_23 *op___0 = op;
  airac_observe(op___0, 0);
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}
