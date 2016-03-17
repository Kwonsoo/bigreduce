struct {
  int *string;
} typedef argstr;
argstr *macrocurrent_1, *para_macro_process_as;
int para_macro_process_buffer[1];
int para_process_q, misc_readstring_length, misc_readstring_pp,
    misc_readitem_yield, misc_readitem_length;
void *misc_malloc_tmp;
int *misc_readitem();
para_process(p1) {
  para_macro_process_as = para_macro_process_as->string =
      misc_readitem(para_process_q);
  para_process(para_macro_process_buffer);
  para_process_q = p1;
  if (macrocurrent_1 == 0) {
    int tmp___0 = macrocurrent_1->string;
    airac_observe(tmp___0, 0);
    macrocurrent_1->string++;
  }
}

misc_readstring(int *p1, int *p2) {
  misc_readstring_pp = p1;
  misc_readstring_length = p1 - p1;
  *p2 = misc_readstring_length;
  misc_malloc_tmp = malloc(misc_readstring_length);
  misc_readstring_pp = misc_malloc_tmp;
  return misc_readstring_pp;
}

int *misc_readitem(int *p1) {
  misc_readitem_yield = misc_readstring(p1, &misc_readitem_length);
  p1 += misc_readitem_length;
  return misc_readitem_yield;
}
