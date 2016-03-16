char sbm_evaluate_buf[1024];
int sbm_matrix_multiplication_k;
sbm_multiply(p1) {
  sbm_multiply(sbm_evaluate_buf);
  char *mat1 = p1;
  int tmp___1;
  sbm_matrix_multiplication_k = tmp___1 = sbm_matrix_multiplication_k++;
  airac_observe(mat1, tmp___1);
}
