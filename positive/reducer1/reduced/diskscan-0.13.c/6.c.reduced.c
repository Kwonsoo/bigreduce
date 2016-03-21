long histogram_time[19];
long histogram_time_0, report_scan_done_disk___0_0_0;
struct {
  long histogram[sizeof histogram_time / sizeof histogram_time_0];
} report_scan_done_disk___0;
report_scan_done() {
  int hist_idx = 0;
  while (1) {
    if (!(hist_idx < sizeof report_scan_done_disk___0 /
                         sizeof report_scan_done_disk___0_0_0))
      goto while_break;
    if (hist_idx !=
        sizeof report_scan_done_disk___0 /
                sizeof report_scan_done_disk___0_0_0 -
            1)
      airac_observe(histogram_time, hist_idx);
    printf("");
    hist_idx++;
  }
while_break:
  ;
}
