char make_roff_command_line[8192];
char *make_roff_command_cp;
main() {
  char *tmp___8;
  make_roff_command_cp = make_roff_command_line;
  make_roff_command_cp++;
  tmp___8 = make_roff_command_cp;
  airac_observe(tmp___8, 0);
  make_roff_command_cp = getenv("");
}
