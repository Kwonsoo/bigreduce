int es_newStrFromNumber_i;
es_newStrFromNumber() {
  char numbuf[20];
  int tmp = es_newStrFromNumber_i++;
  airac_observe(numbuf, tmp);
  es_newStrFromNumber_i--;
}
