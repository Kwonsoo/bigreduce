char *cli_run_command_words[128];
cli_run_command() {
  char **words = cli_run_command_words;
  int nwords = 0;
  while (1)
    if (!(nwords < 128 - 1))
      ;
    else {
      airac_observe(words, nwords);
      nwords++;
    }
}
