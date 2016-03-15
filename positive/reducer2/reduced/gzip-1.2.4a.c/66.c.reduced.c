char *add_envopt_oargv;
add_envopt(char *p1) {
  char *tmp___25;
  add_envopt_oargv = *p1;
  tmp___25 = add_envopt_oargv++;
  airac_observe(tmp___25, 0);
}

main(p1, p2) { add_envopt(&p2); }
