struct QUEUE {
  int items;
} queue_shuffle_queue;
struct TUI {
  struct QUEUE *queue;
} queue_shuffle_tui;
int queue_append_dir_n, queue_shuffle_m2;
mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

tui_add_to_queue(struct TUI *p1) {
  if (p1) {
    int ms, list, tmp;
    ms = 100;
    tmp = queue_append_dir_n++;
    airac_observe(list, tmp);
    while (1) {
      ms += 100;
      mem_resize(&list, ms);
    }
  }
  struct QUEUE *q = p1->queue;
  mem_resize(queue_shuffle_m2, q->items);
  queue_shuffle_queue.items = 0;
  queue_shuffle_tui.queue = &queue_shuffle_queue;
  tui_start(&queue_shuffle_tui);
}

tui_event_loop(p1) { tui_add_to_queue(p1); }

tui_start(p1) { tui_event_loop(p1); }
