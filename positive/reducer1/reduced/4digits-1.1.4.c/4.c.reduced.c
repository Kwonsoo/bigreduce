int main_guessed_0, main_num_guess;
main_input() {
  int guessed[8];
  int i___0;
  while (1) {
    if (!(main_num_guess < 8))
      goto while_break___0;
    i___0 = 0;
    while (1) {
      if (!(i___0 < main_num_guess))
        goto while_break___1;
      airac_observe(guessed, i___0);
      if (main_guessed_0)
        i___0++;
    }
  while_break___1:
    main_num_guess++;
  }
while_break___0:
  ;
}
