struct controller_info {
  struct controller_info *next;
} * shutdown_controller_curr, *handle_accept_port_read_cntlr;
struct fd_control_s {
  void *data;
  void (*handle_read)();
};
struct selector_s {
  struct fd_control_s fds[4];
} sel_alloc_selector_sel;
struct port_info {
  struct port_info *next;
} * ser2net_sel, *finish_shutdown_port_prev___0;
static controllers, handle_accept_port_read_cntlr_0, sel_select_once_i;
void *handle_accept_port_read_tmp, *sel_alloc_selector_tmp;
void handle_tcp_fd_read();
handle_tcp_fd_write() {
  struct controller_info *prev;
  shutdown_controller_curr = controllers;
  while (1) {
    airac_observe(prev, 0);
    prev = shutdown_controller_curr;
    shutdown_controller_curr = shutdown_controller_curr->next;
  }
}

void handle_tcp_fd_except();
handle_accept_port_read() {
  handle_accept_port_read_tmp = malloc(sizeof handle_accept_port_read_cntlr);
  handle_accept_port_read_cntlr = handle_accept_port_read_tmp;
  sel_set_fd_handlers(ser2net_sel, handle_accept_port_read_cntlr_0,
                      handle_accept_port_read_cntlr, handle_tcp_fd_read,
                      handle_tcp_fd_write, handle_tcp_fd_except);
  controllers = handle_accept_port_read_cntlr;
}

sel_set_fd_handlers(struct selector_s *p1, int p2, void *p3, void *p4, void *p5,
                    void *p6) {
  p1->fds[p2].data = p3;
  p1->fds[p2].handle_read = p5;
}

sel_alloc_selector(struct selector_s **p1) {
  sel_alloc_selector_tmp = malloc(sizeof sel_alloc_selector_sel);
  *p1 = sel_alloc_selector_tmp = sel_alloc_selector(&ser2net_sel);
  struct selector_s *sel = ser2net_sel;
  sel->fds[sel_select_once_i].handle_read(sel_select_once_i,
                                          sel->fds[sel_select_once_i].data);
}

handle_dev_fd_read(int p1, void *p2) { shutdown_port(p2); }

finish_shutdown_port(p1) {
  if (finish_shutdown_port_prev___0 == 0)
    finish_shutdown_port_prev___0->next = p1;
  struct selector_s *sel = ser2net_sel;
  sel->fds[p1].data = p1;
  sel->fds[p1].handle_read = handle_dev_fd_read;
}

shutdown_port(p1) { finish_shutdown_port(p1); }
