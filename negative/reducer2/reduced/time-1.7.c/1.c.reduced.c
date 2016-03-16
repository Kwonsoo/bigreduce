int optind;
const *main_command_line;
main(int p1, char *p2) {
  main_command_line = p2 + optind;
  const av = main_command_line;
  airac_observe(av, 0);
}
