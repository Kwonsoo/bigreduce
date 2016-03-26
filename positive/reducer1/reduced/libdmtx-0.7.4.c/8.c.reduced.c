enum SchemeState { SchemeStateCount } dmtxEncodeDataMatrix() {
  enum SchemeState state;
  int streamsBest[17];
  state = 0;
  while (1) {
    if (!(state < 17))
      goto while_break___2;
    airac_observe(streamsBest, state);
    state = state + 1;
  }
while_break___2:
  ;
}
