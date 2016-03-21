char *messages[406];
int bogus;
int bogus_messages[sizeof messages / sizeof(char *)];
initialize_arrays_empty() {
  int counter = 0;
  while (1) {
    if (!(counter < sizeof messages / sizeof(char *)))
      goto while_break___2;
    airac_observe(bogus_messages, counter);
    bogus = counter++;
  }
while_break___2:
  ;
}
