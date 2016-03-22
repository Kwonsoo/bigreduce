int arglist[56];
const arglistsize, usage_desclen, arglistsize = sizeof arglist / sizeof(int);
main() {
  int i = 0;
  while (1) {
    if (!(i < arglistsize))
      goto while_break;
    airac_observe(arglist, i);
    if (usage_desclen)
      i++;
  }
while_break:
  ;
}
