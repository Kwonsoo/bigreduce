int yy_buffer_stack_top___3, yy_buffer_stack_max___3,
    sshensure_buffer_stack_tmp, sshensure_buffer_stack_num_to_alloc,
    ssh_scan_bytes_n;
int **yy_buffer_stack___3;
void *sshensure_buffer_stack_tmp___0, *sshalloc_tmp, *sshrealloc_tmp,
    *sshrealloc_ptr;
void *sshalloc();
void *sshrealloc();
sshensure_buffer_stack() {
  sshensure_buffer_stack_tmp = sshalloc(sizeof(struct yy_buffer_state *));
  yy_buffer_stack___3 = sshensure_buffer_stack_tmp;
  sshensure_buffer_stack_num_to_alloc = yy_buffer_stack_max___3 + 8;
  sshensure_buffer_stack_tmp___0 =
      sshrealloc(sshensure_buffer_stack_num_to_alloc);
  yy_buffer_stack___3 = sshensure_buffer_stack_tmp___0;
  yy_buffer_stack_max___3 = sshensure_buffer_stack_num_to_alloc;
}

ssh_scan_bytes() { sshalloc(ssh_scan_bytes_n); }

void *sshalloc(p1) {
  sshalloc_tmp = malloc(p1);
  return sshalloc_tmp;
}

void *sshrealloc(p1) {
  sshrealloc_tmp = realloc(sshrealloc_ptr, p1);
  return sshrealloc_tmp;
}

sshparse() {
  sshensure_buffer_stack();
  airac_observe(yy_buffer_stack___3, yy_buffer_stack_top___3);
  yy_buffer_stack_top___3++;
  yy_buffer_stack_top___3--;
}
