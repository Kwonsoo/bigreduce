struct {
  double tfm[4];
} rd;
main() {
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___1;
    airac_observe(rd.tfm, i);
    i++;
  }
while_break___1:
  ;
}
