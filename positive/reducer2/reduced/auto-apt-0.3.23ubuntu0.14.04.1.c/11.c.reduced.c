struct __strtab {
  int hashtab[16381];
} * strtab_alloc_tmp;
strtab_alloc() {
  int i;
  struct __strtab *st;
  strtab_alloc_tmp = malloc(sizeof(struct __strtab));
  st = strtab_alloc_tmp;
  i = 0;
  while (1) {
    if (!(i < 16381))
      goto while_break;
    airac_observe(st->hashtab, i);
    i++;
  }
while_break:
  ;
}
