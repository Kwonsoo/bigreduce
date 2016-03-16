void *xalloc_tmp___1;
int optind, main_chunk_tlb;
void (*const shuffle_heuristic)();
struct filebuf main_fb;
struct filebuf {
  int start;
  int count;
} iovec_parse(struct filebuf *fb) {
  fb->start++;
  fb->count = fb->start;
}

msort32_update(dd, o) { airac_observe(dd, o); }

msort32(dd, count) {
  msort32_update(dd, count);
  count--;
}

main() {
  if (optind) {
    xalloc_tmp___1 = malloc(optind);
    while (1)
      ;
  }
  iovec_parse(&main_fb);
  main_fb.start = 0;
  shuffle_heuristic(main_chunk_tlb, xalloc_tmp___1 + main_fb.start,
                    main_fb.count);
}

shuffle_sqrtbase(unsigned src, unsigned dst, int count) { msort32(dst, count); }

void (*const shuffle_heuristic)() = shuffle_sqrtbase;
