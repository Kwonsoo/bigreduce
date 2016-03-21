char *messages[406];
int bogus;
int used_messages[sizeof messages / sizeof(char *)];
initialize_arrays_empty() {
  int counter = 0;
  while (1) {
    if (!(counter < sizeof messages / sizeof(char *)))
      goto while_break___2;
    airac_observe(used_messages, counter);
    bogus = counter++;
  }
while_break___2:
  ;
}
