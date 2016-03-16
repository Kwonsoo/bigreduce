char make_roff_command_line[8192];
char *make_roff_command_cp;
main() {
  char *tmp___9;
  make_roff_command_cp = make_roff_command_line;
  make_roff_command_cp++;
  make_roff_command_cp++;
  tmp___9 = make_roff_command_cp;
  airac_observe(tmp___9, 0);
  make_roff_command_cp = getenv("");
}
