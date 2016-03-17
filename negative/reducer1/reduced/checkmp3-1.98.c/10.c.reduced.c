int transform_char_array_place_holder;
char scan_file_possible_mp3_tag[128];
struct __anonstruct_gen_info_27 {
  int byte_count;
} init_gen_info_struct(struct __anonstruct_gen_info_27 *p1) {
  p1->byte_count = 0;
}

scan_file_file_info() {
  init_gen_info_struct(scan_file_file_info);
  char *byte_list = scan_file_possible_mp3_tag;
  struct __anonstruct_gen_info_27 *file_info = scan_file_file_info;
  int counter;
  transform_char_array_place_holder = file_info->byte_count % 8;
  counter = transform_char_array_place_holder;
  if (!(counter < 128))
    goto while_break___0;
  airac_observe(byte_list, counter);
while_break___0:
  ;
}
