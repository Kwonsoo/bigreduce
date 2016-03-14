transform_char_array() {
  char trans_list[128];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 128)
      goto while_break;
    airac_observe(trans_list, tmp);
    tmp++;
  }
while_break:
  ;
}
