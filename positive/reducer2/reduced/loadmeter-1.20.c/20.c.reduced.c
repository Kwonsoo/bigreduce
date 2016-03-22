int olduse[20];
main() {
  int rx = 0;
  while (1) {
    if (!(rx < 20))
      goto while_break___2;
    airac_observe(olduse, rx);
    rx++;
  }
while_break___2:
  ;
}
