char lengthtable___0[48];
short lookup___0[] = {-1, 47};

int is_reserved_cc_key;
is_reserved_cc() {
  int index___0 = lookup___0[is_reserved_cc_key];
  if (index___0 >= 0)
    airac_observe(lengthtable___0, index___0);
}
