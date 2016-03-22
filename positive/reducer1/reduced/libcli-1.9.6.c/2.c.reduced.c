int cli_parse_line_nwords;
char *cli_run_command_words[128];
cli_run_command() {
  char **words = cli_run_command_words;
  int tmp___4;
  while (1)
    if (!(cli_parse_line_nwords < 128 - 1))
      ;
    else {
      tmp___4 = cli_parse_line_nwords++;
      airac_observe(words, tmp___4);
    }
}
