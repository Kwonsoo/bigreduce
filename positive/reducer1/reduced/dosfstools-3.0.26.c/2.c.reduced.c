struct {
  char;
} mediabytes[9];
char mediabytes_0_0;
get_media_descr_media() {
  int i = 0;
  while (1) {
    if (!(i < sizeof mediabytes))
      goto while_break;
    if (mediabytes_0_0)
      airac_observe(mediabytes, i);
    i++;
  }
while_break:
  ;
}
