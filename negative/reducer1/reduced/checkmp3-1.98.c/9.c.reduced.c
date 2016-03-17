struct __anonstruct_gen_info_27 {
  int byte_count;
} init_gen_info_struct(struct __anonstruct_gen_info_27 *p1) {
  p1->byte_count = 0;
  int place_holder, counter;
  char trans_list[128];
  place_holder = p1->byte_count % 8;
  counter = place_holder;
  airac_observe(trans_list, counter - place_holder);
}

scan_file_file_info() { init_gen_info_struct(scan_file_file_info); }
