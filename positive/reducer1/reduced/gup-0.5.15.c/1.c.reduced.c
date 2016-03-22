char CrackFrom_commbuf[1024];
CrackFrom() {
  char *cp = CrackFrom_commbuf;
  airac_observe(cp, 0);
  cp++;
}
