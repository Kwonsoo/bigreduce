short codetab[69001];
long free_ent;
decompress() {
  long code = 255;
  while (1) {
    if (!(code >= 0))
      goto while_break___1;
    airac_observe(codetab, code);
    code--;
  }
while_break___1:
  code = free_ent = free_ent + 1;
}
