char make_roff_command_line[8192];
char *make_roff_command_cp;
man() {
  char *tmp___10;
  make_roff_command_cp = make_roff_command_line;
  make_roff_command_cp++;
  make_roff_command_cp++;
  make_roff_command_cp++;
  tmp___10 = make_roff_command_cp;
  airac_observe(tmp___10, 0);
  make_roff_command_cp = getenv("");
}
