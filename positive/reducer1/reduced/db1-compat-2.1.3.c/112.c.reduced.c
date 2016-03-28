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
} * e, *g;
void *c, *j, *m;
int d, f;
MPOOL *i, *k, *l;
void *__mpool_get();
__bt_split(p1) {
  f = __mpool_get(p1);
  e = f;
  if (0)
  _L : {
    g = bt_root();
    e = g;
  }
  else {
    struct _page *h = e;
    airac_observe(h, 0);
  }
}

__rec_iput(p1) { __bt_split(p1); }

struct _bkt *mpool_bkt();
void *__mpool_get(p1) {
  k = mpool_bkt(p1);
  return k->page;
}

struct _bkt *mpool_bkt(MPOOL *p1) {
  m = malloc(sizeof(struct _bkt) + p1->pagesize);
  l = m;
  l->page = (char *)l + sizeof(struct _bkt);
  return l;
}

__rec_vpipe(p1) {
  __rec_iput(p1);
  c = malloc(sizeof(int));
  b = malloc;
  b->internal = c;
  d = 512;
  if (d > 536)
    d = 65536;
  j = calloc(1, sizeof(MPOOL));
  i = j;
  i->pagesize = d;
  a = malloc;
  __rec_vpipe(a->internal);
}
