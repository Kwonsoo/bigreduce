int arglist[56];
char arglist_0_1;
const arglistsize, arglistsize = sizeof arglist / sizeof(int);
main() {
  int i = 0;
  while (1) {
    if (!(i < arglistsize))
      goto while_break;
    if (arglist_0_1)
      airac_observe(arglist, i);
    i++;
  }
while_break:
  ;
}
