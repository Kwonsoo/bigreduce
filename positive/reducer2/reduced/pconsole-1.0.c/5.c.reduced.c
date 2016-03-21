struct Conn_tag {
  int;
  char *hostname;
} * AllConns;
struct List_tag {
  struct List_tag *next;
} * *add_List_root;
int cmd_attach_i;
char *cmd_attach_devname;
char cmd_attach_argv;
void *new_Conn_tmp;
void *add_List();
destroy_Conn(struct Conn_tag *c) {
  airac_observe(c, 0);
  c->hostname = 0;
}

main() {
  while (1) {
    if (cmd_attach_argv)
      goto while_break;
    cmd_attach_devname = strchr(cmd_attach_i, '#');
    cmd_attach_devname = 0;
    if (*cmd_attach_devname)
      new_Conn_tmp = malloc(sizeof(struct Conn_tag));
    destroy_Conn(new_Conn_tmp);
    add_List(&AllConns, new_Conn_tmp);
  }
while_break:
  while (1)
    destroy_Conn(AllConns);
}

void *add_List(void *v1, void *v2) {
  if (v1 == 0)
    return;
  add_List_root = v1;
  if (*add_List_root)
    *add_List_root = v2;
}
