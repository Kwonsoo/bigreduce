typedef char char_type;
long htab[69001];
decompress() {
  register code = 255;
  while (1) {
    if (!(code >= 0))
      goto while_break;
    airac_observe((char_type *)htab, code);
    code--;
  }
while_break:
  code = getcode();
}
