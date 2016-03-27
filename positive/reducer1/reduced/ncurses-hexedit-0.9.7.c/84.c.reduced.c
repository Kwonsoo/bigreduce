struct {
  int len;
  unsigned str;
} rstr = {};

int hex_string_box_in___0;
void *hex_string_box_tmp;
search() {
  hex_string_box_tmp = malloc(16);
  rstr.str = hex_string_box_tmp;
  while (1)
  while_continue___0 : {
    if (rstr.len >= 16)
      goto while_continue___0;
    airac_observe(rstr.str, rstr.len);
    rstr.len++;
    if (hex_string_box_in___0)
      rstr.len--;
  }
}
