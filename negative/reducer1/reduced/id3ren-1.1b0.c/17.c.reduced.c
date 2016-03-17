void *alloc_string_tmp;
char *def_field = "unknown", *replace_char = "";
char program_path, main_p;
int main_tmp;
unsigned main_tmp___0;
alloc_string(char *p1, long p2) {
  alloc_string_tmp = malloc(p2);
  *p1 = alloc_string_tmp;
  if (*p1)
    exit(1);
}

main() {
  main_tmp = main_tmp___0 = strlen(main_p);
  alloc_string(program_path, main_tmp - main_tmp___0);
  alloc_string(&def_field, 1);
  alloc_string(&replace_char, 1);
  int i = 0;
  while (1) {
    airac_observe(replace_char, i);
    i += 2;
  }
}
