int heap[573];
int heap_len;
flush_block() {
  while (1) {
    if (!(heap_len < 2))
      goto while_break___0;
    heap_len++;
    airac_observe(heap, heap_len);
  }
while_break___0:
  heap_len--;
}
