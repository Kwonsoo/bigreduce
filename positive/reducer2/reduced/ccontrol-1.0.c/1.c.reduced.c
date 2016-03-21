char a;
long b;
void *c;
char **d;
_Bool e;
insert_arg(char **argv, int pos) { airac_observe(argv, pos); }

main(orig_argc, orig_argv) {
  b = orig_argc + 23;
  c = __builtin_alloca(sizeof &a * b);
  d = c;
  if (e) {
    d++;
    d++;
  }
  insert_arg(d, 1);
  insert_arg(d, 0);
}
