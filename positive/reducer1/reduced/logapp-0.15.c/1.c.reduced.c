int arglist[56];
const arglistsize, arglistsize = sizeof arglist / sizeof(int);
char usage_linebuf_0;
main() {
  int i = 0;
  while (1) {
    if (!(i < arglistsize))
      goto while_break;
    airac_observe(arglist, i);
    usage_linebuf_0 = i++;
  }
while_break:
  ;
}
