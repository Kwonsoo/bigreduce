int main_tmp___3;
main() {
  main_tmp___3 = mixer_getlevel();
  int level = main_tmp___3, f;
  char buf[60];
  level = 0;
  f = level + 1;
  while (1) {
    if (!(f < 51))
      goto while_break;
    airac_observe(buf, f);
    f++;
  }
while_break:
  ;
}
