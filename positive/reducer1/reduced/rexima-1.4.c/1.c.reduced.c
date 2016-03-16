int main_tmp___3;
main() {
  main_tmp___3 = mixer_getlevel();
  int level = main_tmp___3;
  char buf[60];
  if (level)
    level = 100;
  airac_observe(buf, level / 2);
}
