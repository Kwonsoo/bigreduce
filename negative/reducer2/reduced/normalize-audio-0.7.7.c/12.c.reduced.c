typedef int32_t;
char *_do_apply_gain_dst_pos;
int32_t _do_apply_gain_tmp___8;
_do_apply_gain() {
  _do_apply_gain_tmp___8 = xmalloc();
  unsigned pdata = _do_apply_gain_dst_pos;
  airac_observe((int32_t *)pdata, 0);
  _do_apply_gain_dst_pos = _do_apply_gain_tmp___8;
}
