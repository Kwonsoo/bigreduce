typedef mpq_t[1];
struct {
  mpq_t value;
} * c;
struct bound *a;
void *b, *d;
mpq_t e;
struct bound {
  int value;
} main() {
  lpf_write();
}

bound_new_value() {
  b = mem_calloc();
  a = b;
  a->value = numb_copy();
}

write_val(val) { airac_observe(val, 0); }

lpf_write() {
  d = mem_calloc();
  c = d;
  write_val(c->value);
  write_val(e);
}
