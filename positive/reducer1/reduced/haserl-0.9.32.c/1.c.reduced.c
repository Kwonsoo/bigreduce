bash_setup() {
  int count;
  char av[20];
  count = argc_argv();
  if (count > 19)
    count = 8;
  if (!(count >= 0))
    goto while_break;
  airac_observe(av, count);
while_break:
  ;
}
