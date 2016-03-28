struct __db {
  int (*seq)();
};
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
};
struct {
  struct _page *page;
} * a, *k;
struct __db *b, *l;
void *c, *f, *j;
int d, m, n;
MPOOL *e, *g, *i;
__bt_seq(const p1, int p2, int p3, unsigned p4) { __bt_seqadv(p1); }

struct _bkt *mpool_bkt();
__mpool_get() {
  mpool_bkt();
  return g->page;
}

struct _bkt *mpool_bkt(MPOOL *p1) {
  j = malloc(sizeof(struct _bkt) + p1->pagesize);
  i = j;
  i->page = (char *)i + sizeof(struct _bkt);
  return i;
}

__bt_seqadv(p1) { __bt_first(p1); }

__bt_first(p1) {
  struct _page *h;
  a = __mpool_get();
  h = a;
  airac_observe(h, 0);
  if (k == 0)
    g = mpool_bkt(p1);
  k->page = g;
}

main() {
  c = malloc(sizeof(struct __db));
  b = c;
  b->seq = __bt_seq;
  d = 512;
  if (d > 536)
    d = 65536;
  f = calloc(1, sizeof(MPOOL));
  e = f;
  e->pagesize = d;
  if (l == 0)
    l->seq(l, m, n, 7);
}
