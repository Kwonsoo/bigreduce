char make_roff_command_line[8192];
char *make_roff_command_cp;
main() {
  char *tmp___7;
  make_roff_command_cp = make_roff_command_line;
  tmp___7 = make_roff_command_cp;
  airac_observe(tmp___7, 0);
  make_roff_command_cp++;
  make_roff_command_cp = getenv("");
}
