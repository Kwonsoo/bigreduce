typedef int8_t;
char *_do_apply_gain_src_pos;
void *_do_apply_gain_tmp___7;
_do_apply_gain() {
  _do_apply_gain_tmp___7 = xmalloc();
  unsigned pdata = _do_apply_gain_src_pos;
  airac_observe((int8_t *)pdata, 0);
  _do_apply_gain_src_pos = _do_apply_gain_tmp___7;
}
