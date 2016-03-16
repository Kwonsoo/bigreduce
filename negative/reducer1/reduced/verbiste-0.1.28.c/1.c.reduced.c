main() {
  char *person_array;
  int i;
  person_array = verbiste_conjugate();
  i = 0;
  while (1) {
    airac_observe(person_array, i);
    i++;
  }
}
