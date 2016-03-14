draw_slider_wb_0() {
  int v2len;
  char wb[41];
  v2len = 1;
  if (draw_slider_wb_0)
    v2len++;
  else
    airac_observe(wb, v2len);
}
