char window[65536];
long unlzw_free_ent;
unlzw() {
  long code = 255;
  while (1) {
    if (!(code >= 0))
      goto while_break;
    airac_observe(window, code);
    code--;
  }
while_break:
  code = unlzw_free_ent = unlzw_free_ent + 1;
}
