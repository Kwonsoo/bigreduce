typedef struct bucket bucket;
struct bucket {
  bucket *link;
} typedef core;
int make_bucket_tmp, new_state_n;
void *allocate_p;
core *get_state_sp, *get_state_tmp___1;
short new_state_isp1, new_state_iend;
bucket *make_bucket() {
  make_bucket_tmp = malloc(sizeof(bucket));
  return make_bucket_tmp;
}

lookup() {
  bucket *bp;
  airac_observe(bp, 0);
  bp = bp->link;
  bp = make_bucket();
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
