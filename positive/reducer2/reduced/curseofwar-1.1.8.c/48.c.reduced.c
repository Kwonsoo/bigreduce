char optarg;
int main_l_val;
long main_tmp___41;
main() {
  main_l_val = main_tmp___41 = optarg;
  if (main_l_val > 6)
    return;
  if (main_tmp___41 < 1)
    ;
  else if (main_tmp___41 > main_l_val)
    ;
  else {
    int cl_num_need = main_tmp___41, cl_num;
    int cl[8];
    cl_num = 0;
    while (1) {
      if (cl_num < cl_num_need)
        airac_observe(cl, cl_num);
      cl_num = cl_num_need;
    }
  }
}
