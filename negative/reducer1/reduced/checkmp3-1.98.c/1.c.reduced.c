struct __anonstruct_id3_tag_info_33 scan_file_id3_tag;
struct __anonstruct_id3_tag_info_33 {
  char YEAR[5];
  char COMMENT[31];
} copy_int_array_to_str(tag_field) {
  int counter = 0;
  while (1) {
    airac_observe(tag_field, counter);
    counter++;
  }
}

validate_id3_tag(struct __anonstruct_id3_tag_info_33 *id3_tag) {
  copy_int_array_to_str(id3_tag->YEAR);
  copy_int_array_to_str(id3_tag->COMMENT);
}

scan_file() { validate_id3_tag(&scan_file_id3_tag); }
