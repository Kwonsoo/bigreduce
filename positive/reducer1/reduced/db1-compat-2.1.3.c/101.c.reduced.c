struct {
  void *internal;
} * __rec_open_dbp, *__bt_open_dbp;
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
} * __bt_split_h, *__bt_split_tmp___10;
void *__bt_open_tmp___1, *__mpool_open_tmp___3, *mpool_bkt_tmp___2;
int __bt_open_b_0;
unsigned __bt_split_tmp___7;
MPOOL *__mpool_open_mp, *__mpool_get_bp, *mpool_bkt_bp;
void *__mpool_get();
__bt_split(p1) {
  struct _page *sp;
  __bt_split_tmp___7 = __mpool_get(p1);
  __bt_split_h = __bt_split_tmp___7;
  sp = __bt_split_h;
  __bt_split_tmp___10 = bt_page();
  __bt_split_h = __bt_split_tmp___10;
  airac_observe(sp, 0);
}

__rec_iput(p1) { __bt_split(p1); }

struct _bkt *mpool_bkt();
void *__mpool_get(p1) {
  __mpool_get_bp = mpool_bkt(p1);
  return __mpool_get_bp->page;
}

struct _bkt *mpool_bkt(MPOOL *p1) {
  mpool_bkt_tmp___2 = malloc(sizeof(struct _bkt) + p1->pagesize);
  mpool_bkt_bp = mpool_bkt_tmp___2;
  mpool_bkt_bp->page = (char *)mpool_bkt_bp + sizeof(struct _bkt);
  return mpool_bkt_bp;
}

__rec_vpipe(p1) {
  __rec_iput(p1);
  __bt_open_tmp___1 = malloc(sizeof(int));
  __bt_open_dbp = malloc;
  __bt_open_dbp->internal = __bt_open_tmp___1;
  __bt_open_b_0 = 512;
  if (__bt_open_b_0 > 536)
    __bt_open_b_0 = 65536;
  __mpool_open_tmp___3 = calloc(1, sizeof(MPOOL));
  __mpool_open_mp = __mpool_open_tmp___3;
  __mpool_open_mp->pagesize = __bt_open_b_0;
  __rec_open_dbp = malloc;
  __rec_vpipe(__rec_open_dbp->internal);
}
