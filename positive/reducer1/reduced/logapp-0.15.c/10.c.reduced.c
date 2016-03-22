int arglist[56];
char arglist_0_0;
const arglistsize, arglistsize = sizeof arglist / sizeof(int);
main() {
  int i = 0;
  while (1) {
    if (!(i < arglistsize))
      goto while_break;
    airac_observe(arglist, i);
    if (arglist_0_0)
      i++;
  }
while_break:
  ;
}
