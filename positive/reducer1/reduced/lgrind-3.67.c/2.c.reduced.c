char tgetstr_tmp___1, main_p, main_tmp___3;
char *tdecode_cp;
char the_buf[1];
char *buf = the_buf + 1;
void *main_tmp___0;
char *tdecode();
tgetstr(p1) {
  tdecode(p1);
  return tgetstr_tmp___1;
}

char *tdecode(char *p1) {
  tdecode_cp = *p1;
  tdecode_cp--;
  tdecode_cp++;
  return tdecode_cp;
}

main_area() {
  main_tmp___0 = malloc(16384);
  main_p = main_tmp___0;
  tgetstr_tmp___1 = tdecode(main_area);
  main_p = buf;
  main_tmp___3 = tgetstr(&main_p);
  int re = main_tmp___3;
  airac_observe(re, 0);
}
