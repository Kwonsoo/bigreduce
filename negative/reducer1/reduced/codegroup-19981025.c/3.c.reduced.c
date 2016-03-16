char linebuf[68];
int linelen;
outline() {
  int tmp = linelen++;
  airac_observe(linebuf, tmp);
  outline();
}
