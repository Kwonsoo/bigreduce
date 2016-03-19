void *_write_v4_frames_tmp___0;
int adjust_id3_tag;
apply_gain_mp3() {
  adjust_id3_tag = id3_open();
  _write_v4_frames_tmp___0 = malloc(adjust_id3_tag);
  unsigned tmp___3;
  while (1) {
    _write_v4_frames_tmp___0++;
    tmp___3 = _write_v4_frames_tmp___0;
    airac_observe(tmp___3, 0);
  }
}
