long r[10];
print_CPU_state() {
  unsigned i = 1;
  while (1) {
    if (!(i <= 6))
      goto while_break;
    airac_observe(r, i);
    i++;
  }
while_break:
  ;
}
