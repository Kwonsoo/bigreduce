char prsfv_head_head[82];
char prsfv_head_p;
int prsfv_head_len;
prsfv_head() {
  char *tmp___3 = prsfv_head_head + prsfv_head_len;
  prsfv_head_len = 8 - prsfv_head_len;
  prsfv_head_p = prsfv_head_head + 76;
  tmp___3 = prsfv_head_p;
  airac_observe(tmp___3, 0);
}
