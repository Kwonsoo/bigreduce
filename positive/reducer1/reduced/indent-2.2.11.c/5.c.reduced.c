int wordlist[32];
short lookup[] = {-1, 31};

int is_reserved_key;
is_reserved() {
  int index___0 = lookup[is_reserved_key];
  if (index___0 >= 0)
    airac_observe(wordlist, index___0);
}
