int cli_get_completions_c, cli_get_completions_num_words, cli_get_completions_k;
char *cli_loop_completions[128];
cli_loop() {
  char **completions = cli_loop_completions;
  int tmp___9;
  while (1) {
    if (cli_get_completions_c)
      if (cli_get_completions_num_words) {
        if (!(cli_get_completions_k < 128))
          goto while_break___3;
      } else
        goto while_break___3;
    else
      goto while_break___3;
    tmp___9 = cli_get_completions_k++;
    airac_observe(completions, tmp___9);
  }
while_break___3:
  ;
}
