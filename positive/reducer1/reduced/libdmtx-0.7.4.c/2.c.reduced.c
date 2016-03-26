enum SchemeState {
  SchemeStateCount
} dmtxEncodeDataMatrix_x12ValueCountdmtxEncodeDataMatrix() {
  enum SchemeState state;
  char outputsTempStorage[17];
  state = 0;
  while (1) {
    if (!(state < 17))
      goto while_break;
    airac_observe(outputsTempStorage, state);
    state = state + 1;
  }
while_break:
  ;
}
