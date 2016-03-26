enum SchemeState {
  SchemeStateCount
} dmtxEncodeDataMatrix_x12ValueCountdmtxEncodeDataMatrix() {
  enum SchemeState state;
  int outputsBest[17];
  state = 0;
  while (1) {
    if (!(state < 17))
      goto while_break;
    airac_observe(outputsBest, state);
    state = state + 1;
  }
while_break:
  ;
}
