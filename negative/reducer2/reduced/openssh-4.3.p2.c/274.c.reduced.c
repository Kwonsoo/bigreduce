int pmonitor;
grace_alarm_handler() {
  pmonitor = monitor_init();
  airac_observe(pmonitor, 0);
}
