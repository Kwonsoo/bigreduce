read_chunk_mdia() {
  char str[256];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 256)
      goto while_break;
    airac_observe(str, tmp);
    tmp++;
  }
while_break:
  ;
}
