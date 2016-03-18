xfpt_decode_arg(char *p1) {
  unsigned arg = *p1;
  airac_observe(arg, 0);
}

main(p1, p2) { xfpt_decode_arg(p2); }
