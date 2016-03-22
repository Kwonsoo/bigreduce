struct cache {
  int hashtab[13];
} * get_buffer_real_tmp;
get_buffer_real() {
  struct cache *cache;
  get_buffer_real_tmp = malloc(sizeof(struct cache));
  cache = get_buffer_real_tmp;
  int hpos = 0;
  while (1) {
    if (!(hpos < 13))
      goto while_break;
    airac_observe(cache->hashtab, hpos);
    hpos++;
  }
while_break:
  ;
}
