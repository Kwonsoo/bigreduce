char since_format[256];
int guess_size_i, guess_size_type, guess_size_len, prepare_format_tmp___1;
guess_size(s) {
  int tmp___2;
  guess_size_i = snprintf(s, guess_size_len, guess_size_type);
  tmp___2 = guess_size_i;
  airac_observe(s, tmp___2);
}

prepare_format() {
  prepare_format_tmp___1 = guess_sizesizeof();
  guess_size(since_format + prepare_format_tmp___1);
}
