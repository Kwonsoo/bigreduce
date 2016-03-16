char safeprintbuf_s, safeprintbuf_buf;
int safeprintbuf_realsize;
void *safeprintbuf_tmp;
main() {
  char *tmp___0;
  safeprintbuf_realsize = safeprintbuf_s & safeprintbuf_buf;
  safeprintbuf_tmp = malloc(safeprintbuf_realsize);
  while (1) {
    tmp___0 = safeprintbuf_tmp;
    airac_observe(tmp___0, 0);
    safeprintbuf_tmp++;
  }
}
