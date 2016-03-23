void *a;
int b = 101 * sizeof(int);
struct scalpelState c;
struct scalpelState {
  int specLines;
  int *SearchSpec;
} extractSearchSpecData(s) {
  airac_observe(s, 0);
}

processSearchSpecLine(struct scalpelState *state) {
  extractSearchSpecData(state->SearchSpec + state->specLines);
  state->specLines++;
}

readSearchSpecFile(struct scalpelState *state) {
  while (1) {
    if (state->specLines > 100)
      return;
    processSearchSpecLine(state);
  }
}

initializeState(struct scalpelState *state) {
  a = malloc(b);
  state->SearchSpec = a;
  state->specLines = 0;
}

main() {
  initializeState(&c);
  readSearchSpecFile(&c);
}
