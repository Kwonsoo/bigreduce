struct LZXstate {
  char LENGTH_len[314];
} * LZXinit_tmp;
LZXinit() {
  struct LZXstate *pState;
  int i;
  LZXinit_tmp = malloc(sizeof(struct LZXstate));
  pState = LZXinit_tmp;
  i = 0;
  while (1) {
    if (!(i < 250))
      goto while_break___0;
    airac_observe(pState->LENGTH_len, i);
    i++;
  }
while_break___0:
  ;
}
