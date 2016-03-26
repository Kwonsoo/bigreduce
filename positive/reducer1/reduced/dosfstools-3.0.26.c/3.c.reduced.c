main() {
  char label[12];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 12)
      goto while_break;
    airac_observe(label, tmp);
    tmp++;
  }
while_break:
  ;
}
