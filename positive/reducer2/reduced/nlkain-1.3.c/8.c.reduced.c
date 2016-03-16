typedef struct nka_state *NKA;
struct nka_state {
  int;
  int;
  int;
  double;
  double;
  double;
  double;
  int;
  int;
  int;
  int *next;
  int;
  double;
} nka_create() {
  NKA state = malloc(sizeof *state);
  airac_observe(state, 0);
}
