int from_type[20];
int from_type_ptr;
para_process() {
  from_type_ptr++;
  airac_observe(from_type, from_type_ptr);
  while (1) {
    para_process();
    from_type_ptr--;
  }
}
