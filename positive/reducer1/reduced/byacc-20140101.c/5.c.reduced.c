typedef struct bucket bucket;
struct bucket {
  bucket *link;
} typedef core;
struct {
  core;
} * last_symbol;
void *make_bucket_tmp, *allocate_p;
bucket *lookup_bp, *get_state_sp;
int get_state_tmp___1, new_state_n;
short new_state_isp1, new_state_iend;
reader() { create_symbol_table(); }

lookup() {
  lookup_bp = lookup_bp->link;
  lookup_bp = make_bucket_tmp;
  airac_observe(last_symbol, 0);
  last_symbol = lookup_bp;
}

create_symbol_table() {
  make_bucket_tmp = malloc(sizeof(bucket));
  last_symbol = make_bucket_tmp;
}

core *new_state();
get_state() {
  get_state_tmp___1 = new_state();
  get_state_sp->link = get_state_sp = get_state_tmp___1;
}

core *new_state() {
  new_state_n = new_state_iend & new_state_isp1;
  allocate_p = calloc(1, new_state_n);
  return allocate_p;
}
