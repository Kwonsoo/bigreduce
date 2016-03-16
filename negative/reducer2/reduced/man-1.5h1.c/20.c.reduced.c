struct dirs {
  struct dirs *nxt;
};
char my_catopen_s;
int my_catopen_lang_l_sz;
void *my_malloc_tmp;
char *my_malloc();
read_config_file() {
  struct dirs *dlp;
  airac_observe(dlp, 0);
  dlp = my_malloc();
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  my_catopen_lang_l_sz = &my_catopen_s - my_malloc(my_catopen_lang_l_sz);
  return my_malloc_tmp;
}
