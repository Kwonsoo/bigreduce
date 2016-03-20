struct exclude {
  char exclude;
} * xmalloc_p;
int main_buflen, main_len;
xmalloc(p1) { xmalloc_p = malloc(p1); }

struct exclude *new_exclude_ex, *main_ex = xmalloc;
decode_options() {
  new_exclude_ex = xmalloc;
  new_exclude_ex->exclude = xmalloc_p;
}

main() {
  main_buflen = main_len + 100;
  xmalloc(main_buflen);
  main_len--;
  const *exclude;
  int i;
  exclude = main_ex->exclude;
  i = 0;
  if (i)
    airac_observe(exclude, i);
  i++;
}
