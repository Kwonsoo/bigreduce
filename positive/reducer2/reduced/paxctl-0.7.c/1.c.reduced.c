const pax_flags[6];
int report_flags_num_pax_flags;
report_flags() {
  int i;
  report_flags_num_pax_flags = sizeof pax_flags / sizeof 0;
  i = 0;
  while (1) {
    if (!(i < report_flags_num_pax_flags))
      goto while_break;
    airac_observe(pax_flags, i);
    i++;
  }
while_break:
  ;
}
