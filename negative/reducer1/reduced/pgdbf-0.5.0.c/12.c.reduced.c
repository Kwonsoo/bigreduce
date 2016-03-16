int main_fieldcount;
char main_memorecord;
char *main_t;
char main_fieldname[11];
main() {
  char *tmp___17;
  if (main_fieldcount)
    goto while_break___3;
  main_t = main_fieldname;
  while (1) {
    tmp___17 = main_t++;
    airac_observe(tmp___17, 0);
  }
while_break___3:
  main_t = strchr(main_memorecord, 6);
}
