char *messages[406];
int bogus[sizeof messages / sizeof(char *)];
int bogus_0;
initialize_arrays_empty() {
  int counter = 0;
  while (1) {
    if (!(counter < sizeof messages / sizeof(char *)))
      goto while_break___2;
    airac_observe(bogus, counter);
    bogus_0 = counter++;
  }
while_break___2:
  ;
}
