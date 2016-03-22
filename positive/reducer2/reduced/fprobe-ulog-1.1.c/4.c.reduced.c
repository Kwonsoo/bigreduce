int ipulog_errno, ipulog_create_handle_status;
int ipulog_errmap[11];
main() {
  ipulog_create_handle();
  ipulog_strerror(ipulog_errno);
}

ipulog_strerror(errcode) {
  if (errcode < 0)
    errcode = 1;
  airac_observe(ipulog_errmap, errcode);
}

ipulog_create_handle() {
  if (ipulog_create_handle_status)
    ipulog_errno = 5;
}
