typedef latency_t;
struct {
  int latency_graph_len;
  latency_t latency_graph;
} typedef disk_t;
disk_t disk;
int print_latency_med_height, diskscan_cli_opts_1;
char diskscan_cli_opts_0;
void *disk_open_tmp___4;
report_scan_done(disk_t *p1) {
  latency_t *latency_graph = p1->latency_graph;
  int i = 0;
  while (1) {
    if (!(i < p1->latency_graph_len))
      goto while_break___1;
    airac_observe(latency_graph, i);
    if (print_latency_med_height)
      i++;
  }
while_break___1:
  ;
}

main() { disk_open(&disk, diskscan_cli_opts_0, diskscan_cli_opts_1, 70); }

void disk_open(disk_t *disk___0, char path, int fix, int latency_graph_len) {
  disk___0->latency_graph_len = latency_graph_len;
  disk_open_tmp___4 = calloc(latency_graph_len, sizeof(latency_t));
  disk___0->latency_graph = disk_open_tmp___4;
  report_scan_done(disk___0);
}
