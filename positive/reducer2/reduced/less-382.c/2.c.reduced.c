int marks[53];
int commands_c;
commands() {
  while (1) {
    int c = commands_c;
    if (c >= 97)
      if (c <= 122)
        airac_observe(marks, c - 97);
    commands_c = getcc();
  }
}
