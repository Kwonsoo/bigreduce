struct {
  void (*function)();
} typedef dirstr;
int dot_process_length, dot_process_tmp___1, misc_readitem_length;
dirstr *dot_process_dir;
char *dot_process_p;
void *misc_malloc_tmp;
char misc_readitem_pp, misc_readitem_p;
unsigned char *misc_readitem();
readnumber(char *p1) {
  unsigned tmp___0;
  while (1) {
    tmp___0 = p1++;
    airac_observe(tmp___0, 0);
  }
}

do_eacharg(p1) { readnumber(p1); }
dirstr dirs[] = {do_eacharg}

;
dot_process() {
  dot_process_dir = dirs;
  dot_process_tmp___1 = misc_readitem();
  dot_process_p = dot_process_tmp___1;
  dot_process_dir->function(dot_process_p);
  misc_readitem(&dot_process_length);
  dot_process_p += dot_process_length;
}

unsigned char *misc_readitem(int *p1) {
  misc_readitem_length = misc_readitem_p & misc_readitem_pp;
  misc_malloc_tmp = malloc(misc_readitem_length);
  *p1 = misc_readitem_length;
  return misc_malloc_tmp;
}
