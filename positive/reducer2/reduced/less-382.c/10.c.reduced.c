char cmdbuf[512];
char *get_cmdbuf();
mca() {
  char *cbuf = get_cmdbuf();
  if (mca)
    while (1)
      cbuf++;
  airac_observe(cbuf, 0);
}

char *get_cmdbuf() { return cmdbuf; }
