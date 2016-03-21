int groups_byname;
void *ga_init_tmp___3;
ga_init() {
  ga_init_tmp___3 = xmalloc();
  groups_byname = ga_init_tmp___3;
  while (1)
    ;
}

ga_match() {
  int i = 0;
  if (!i)
    goto while_break;
  airac_observe(groups_byname, i);
  i++;
while_break:
  ;
}
