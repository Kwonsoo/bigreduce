struct {
  void *internal;
} * a, *b;
struct __anonstruct_hq_52 {
  struct _bkt *cqe_next;
  struct _bkt *cqe_prev;
};
struct __anonstruct_q_53 {
  struct _bkt *cqe_next;
  struct _bkt *cqe_prev;
};
struct _bkt {
  struct __anonstruct_hq_52;
  struct __anonstruct_q_53;
  void *page;
  long pagesize;
} typedef MPOOL;
struct _page {
  unsigned;
  unsigned;
  unsigned;
  unsigned;
  unsigned;
  unsigned;
} * e, *i;
void *c, *k, *n;
int d, f;
unsigned g;
MPOOL *j, *l, *m;
void *__mpool_get();
__bt_split(p1) {
  g = __mpool_get(p1);
  e = g;
  if (f) {
    i = bt_root();
    e = i;
  } else {
    struct _page *h = e;
    airac_observe(h, 0);
  }
}

__rec_iput(p1) { __bt_split(p1); }

struct _bkt *mpool_bkt();
void *__mpool_get(p1) {
  l = mpool_bkt(p1);
  return l->page;
}

struct _bkt *mpool_bkt(MPOOL *p1) {
  n = malloc(sizeof(struct _bkt) + p1->pagesize);
  m = n;
  m->page = (char *)m + sizeof(struct _bkt);
  return m;
}

__rec_vpipe(p1) {
  __rec_iput(p1);
  c = malloc(sizeof(int));
  b = malloc;
  b->internal = c;
  d = 512;
  if (d > 536)
    d = 65536;
  k = calloc(1, sizeof(MPOOL));
  j = k;
  j->pagesize = d;
  a = malloc;
  __rec_vpipe(a->internal);
}
