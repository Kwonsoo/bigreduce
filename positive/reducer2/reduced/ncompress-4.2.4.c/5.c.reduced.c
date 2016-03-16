typedef char char_type;
long htab[69001];
long decompress_free_ent;
decompress() {
  long code = 255;
  while (1) {
    if (!(code >= 0))
      goto while_break___0;
    airac_observe((char_type *)htab, code);
    code--;
  }
while_break___0:
  code = decompress_free_ent = decompress_free_ent + 1;
}
