typedef int16_t;
char *_do_apply_gain_dst_pos;
int _do_apply_gain_tmp___8;
_do_apply_gain() {
  _do_apply_gain_tmp___8 = xmalloc();
  unsigned pdata = _do_apply_gain_dst_pos;
  airac_observe((int16_t *)pdata, 0);
  _do_apply_gain_dst_pos = _do_apply_gain_tmp___8;
}
