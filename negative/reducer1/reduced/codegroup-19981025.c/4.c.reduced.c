char linebuf[68];
int linelen;
outgroup() {
  int tmp;
  if (linelen)
    tmp = linelen;
  airac_observe(linebuf, tmp);
  linelen += 5;
  outgroup();
}
