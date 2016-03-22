char optarg;
int main_l_val;
long main_tmp___41;
main() {
  main_l_val = main_tmp___41 = optarg;
  if (main_l_val > 6)
    return;
  if (main_tmp___41 > main_l_val)
    return;
  int clients_num = main_tmp___41, i = 0;
  int all_players[7];
  while (1) {
    if (i < clients_num)
      airac_observe(all_players, i);
    i++;
  }
}
