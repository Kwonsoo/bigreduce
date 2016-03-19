typedef int32_t;
char *_do_apply_gain_src_pos;
int _do_apply_gain_tmp___7;
_do_apply_gain() {
  _do_apply_gain_tmp___7 = xmalloc();
  unsigned pdata = _do_apply_gain_src_pos;
  airac_observe((int32_t *)pdata, 0);
  _do_apply_gain_src_pos = _do_apply_gain_tmp___7;
}
