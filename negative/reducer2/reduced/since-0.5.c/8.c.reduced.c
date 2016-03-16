char since_format[256];
int guess_size_i, guess_size_type, guess_size_len, prepare_format_tmp;
guess_size(s) {
  int tmp___4;
  guess_size_i = snprintf(s, guess_size_len, guess_size_type);
  tmp___4 = guess_size_i;
  airac_observe(s, tmp___4);
}

prepare_format() {
  prepare_format_tmp = guess_sizesizeof();
  guess_size(since_format + prepare_format_tmp);
}
