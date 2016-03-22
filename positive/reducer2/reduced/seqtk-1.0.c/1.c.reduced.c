stk_trimfq() {
  double q_int2real[128];
  int q = kseq_init();
  q = 36;
  if (q > 127)
    q = 127;
  airac_observe(q_int2real, q);
}
