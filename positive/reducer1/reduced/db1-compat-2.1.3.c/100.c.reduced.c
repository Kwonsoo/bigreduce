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
struct __db *a, *k;
void *b, *e, *i;
int c, l;
MPOOL *d, *f, *g;
__bt_seq(const p1, int p2, int p3, unsigned p4) {
  struct _page *h = mpool_look();
  if (f != 0) {
    MPOOL *j = p1;
    i = malloc(sizeof(struct _bkt) + j->pagesize);
    g = i;
    g->page = (char *)g + sizeof(struct _bkt);
  }
  h = f->page;
  airac_observe(h, 0);
}

main_data() {
  if (k == 0)
    b = malloc(sizeof(struct __db));
  a = b;
  a->seq = __bt_seq;
  c = 512;
  if (c > 536)
    c = 65536;
  e = calloc(1, sizeof(MPOOL));
  d = e;
  d->pagesize = c;
  k->seq(k, l, main_data, 7);
}
