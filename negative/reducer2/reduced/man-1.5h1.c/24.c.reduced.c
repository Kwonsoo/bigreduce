struct dirs {
  struct dirs *nxt;
} * read_config_file_dlp_0;
char adddir_tmp, my_catopen_s;
int my_catopen_lang_l_sz;
void *my_malloc_tmp;
char *my_malloc();
read_config_file() {
  struct dirs *dlp = read_config_file_dlp_0;
  adddir_tmp = my_malloc();
  read_config_file_dlp_0 = adddir_tmp;
  airac_observe(dlp, 0);
}

fatal() {
  my_catopen_lang_l_sz = &my_catopen_s - my_malloc(my_catopen_lang_l_sz);
}

char *my_malloc(p1) {
  my_malloc_tmp = malloc(p1);
  return my_malloc_tmp;
}