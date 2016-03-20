struct __anonstruct_HashItem_32 {
  int (*func)();
} * word_print_core_hip;
char op_create_tmp, ps_init_op___0_7_0;
long current_max_length = 1;
int op;
void *my_malloc_tmp;
char *my_malloc();
expand_word_buffer() {
  current_max_length *= 2;
  my_malloc(current_max_length);
}

word_read() {
  while (1)
    expand_word_buffer();
}

int *ps_init();
main() {
  op = ps_init();
  word_read();
  word_print_core();
}

int *ps_init() {
  op_create_tmp = my_malloc(sizeof(int));
  ps_init_op___0_7_0 = "";
  return op_create_tmp;
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}

cmd_cf() { airac_observe(op, 0); }
struct __anonstruct_HashItem_32 hashArray_c[] = {cmd_cf}

;
static *hash___0[] = {hashArray_c}

;
word_print_core() {
  word_print_core_hip = hash___0[7] = word_print_core_hip->func();
}
