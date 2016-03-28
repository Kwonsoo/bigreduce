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
  struct __anonstruct_q_53 q;
  void *page;
  unsigned;
} * h, *i;
struct _lqh {
  struct _bkt *cqh_last;
};
struct {
  struct _lqh lqh;
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
void *c, *e, *g, *j;
int d;
MPOOL *f;
void *__mpool_get();
struct _page *__bt_new();
bt_page(p1) {
  struct _page *r = __bt_new(p1);
  airac_observe(r, 0);
}

__bt_split(p1) { bt_page(p1); }

struct _page *__bt_new(p1) {
  e = __mpool_get(p1);
  return e;
}

__rec_iput(p1) { __bt_split(p1); }

struct _bkt *mpool_bkt();
void *__mpool_get(MPOOL *p1) {
  h = mpool_look();
  if (h != 0)
    p1->lqh.cqh_last->q.cqe_next = p1->lqh.cqh_last = h = mpool_bkt(p1);
  return h->page;
}

struct _bkt *mpool_bkt(MPOOL *p1) {
  i = i->q.cqe_next;
  j = malloc(sizeof(struct _bkt) + p1->pagesize);
  i = j;
  i->page = (char *)i + sizeof(struct _bkt);
}

__rec_fpipe(p1) {
  __rec_iput(p1);
  c = malloc(sizeof(int));
  b = malloc;
  b->internal = c;
  d = 512;
  if (d > 536)
    d = 65536;
  g = calloc(1, sizeof(MPOOL));
  f = g;
  f->pagesize = d;
  a = malloc;
  __rec_fpipe(a->internal);
}
