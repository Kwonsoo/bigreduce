enum SchemeState { SchemeStateCount } dmtxEncodeDataMatrix() {
  enum SchemeState state;
  int streamsTemp[17];
  state = 0;
  while (1) {
    if (!(state < 17))
      goto while_break___1;
    airac_observe(streamsTemp, state);
    state = state + 1;
  }
while_break___1:
  ;
}
