int merge_window_searchlen;
vpatch() {
  char search[80];
  int tmp___19;
  while (merge_window_searchlen < sizeof search - 1) {
    tmp___19 = merge_window_searchlen++;
    airac_observe(search, tmp___19);
  }
}
