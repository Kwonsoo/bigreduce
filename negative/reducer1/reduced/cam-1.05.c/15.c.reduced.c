draw_slider_tmp___6() {
  int v1len, v2len, v3len;
  char wb[41];
  v2len = 1;
  v1len = v2len;
  if (draw_slider_tmp___6) {
    v1len++;
    v2len++;
  }
  v3len = 1 - (v2len + v1len);
  airac_observe(wb, v3len);
}
