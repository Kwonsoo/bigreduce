struct QUEUE {
  int items;
} queue_append_dir_queue;
struct TUI {
  struct QUEUE *queue;
} queue_append_dir_m2, queue_append_dir_tui;
queue_append_dir(struct QUEUE *p1) {
  int pos, ms, list, tmp___0;
  pos = 0;
  ms = 100;
  tmp___0 = pos++;
  airac_observe(list, tmp___0);
  ms += 100;
  mem_resize(&list, ms);
  mem_resize(queue_append_dir_m2, p1->items);
  queue_append_dir_queue.items = 0;
  queue_append_dir_tui.queue = &queue_append_dir_queue;
  tui_start(&queue_append_dir_tui);
}

mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

tui_add_to_queue(struct TUI *p1) {
  if (p1)
    queue_append_dir(p1->queue);
}

tui_event_loop(p1) { tui_add_to_queue(p1); }

tui_start(p1) { tui_event_loop(p1); }
