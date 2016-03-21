void *clean_name_tmp___3;
int clean_name_s;
remove_double_dirs(fn) {
  long pos = 0;
  airac_observe(fn, pos);
  pos--;
  pos++;
}

clean_name(fn) {
  remove_double_dirs(fn);
  clean_name_tmp___3 = malloc(4096);
  process_normal(clean_name_s, clean_name_tmp___3);
}

process_normal(int s, char *fn) { clean_name(fn); }
