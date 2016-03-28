struct {
  long d[8];
} memory_core;
execute___25() {
  long x = 0;
  while (1) {
    if (!(x < 8))
      goto while_break;
    airac_observe(memory_core.d, x);
    x++;
  }
while_break:
  ;
}
