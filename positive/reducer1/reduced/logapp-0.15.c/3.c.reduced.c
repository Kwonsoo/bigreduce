int arglist[56];
const arglistsize, usage_j, arglistsize = sizeof arglist / sizeof(int);
main() {
  int i = 0;
  while (1) {
    if (!(i < arglistsize))
      goto while_break;
    airac_observe(arglist, i);
    if (usage_j)
      i++;
  }
while_break:
  ;
}
