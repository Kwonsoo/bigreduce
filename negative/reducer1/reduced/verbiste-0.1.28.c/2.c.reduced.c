main() {
  char **person_array;
  int i, j;
  person_array = verbiste_conjugate();
  j = 0;
  while (1) {
    airac_observe(*(person_array + i), j);
    j++;
  }
}
