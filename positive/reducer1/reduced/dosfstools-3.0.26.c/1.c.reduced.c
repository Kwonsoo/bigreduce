struct {
  char;
} mediabytes[9];
get_media_descr_media() {
  int i = 0;
  while (1) {
    if (!(i < sizeof mediabytes))
      goto while_break;
    airac_observe(mediabytes, i);
    if (get_media_descr_media)
      i++;
  }
while_break:
  ;
}
