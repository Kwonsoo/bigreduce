void *misc_malloc_tmp;
int misc_readstring_length;
char misc_readstring_pp, misc_readstring_p;
void *misc_malloc();
para_macro_process() {
  int me = misc_malloc();
  airac_observe(me, 0);
}

void *misc_malloc(p1) {
  misc_malloc_tmp = malloc(p1);
  return misc_malloc_tmp;
}

misc_readstring() {
  misc_readstring_length = misc_readstring_pp & misc_readstring_p;
  misc_malloc(misc_readstring_length);
}
