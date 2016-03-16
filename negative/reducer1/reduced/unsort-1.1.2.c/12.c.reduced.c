struct filebuf {
  int start;
  int count;
} * xalloc_tmp___1, main_fb;
int optind, main_chunk_tlb;
void (*const shuffle_heuristic)();
msort32_update(dd, o) {
  int o2 = o;
  airac_observe(dd, o2);
}

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
  struct filebuf *fb = &main_fb;
  fb->start++;
  fb->count = fb->start;
  main_fb.start = 0;
  shuffle_heuristic(main_chunk_tlb, xalloc_tmp___1 + main_fb.start,
                    main_fb.count);
}

shuffle_sqrtbase(unsigned src, unsigned dst, int count) { msort32(dst, count); }

void (*const shuffle_heuristic)() = shuffle_sqrtbase;
