char CrackFrom_comm[1024];
CrackFrom() {
  char *xp = CrackFrom_comm;
  airac_observe(xp, 0);
  xp++;
  xp--;
}
