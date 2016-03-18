struct dxml_attribute {
  char;
  char *attribute_data;
  struct dxml_attribute *next;
} typedef dxml_attribute;
struct dxml_element {
  dxml_attribute element_attribute;
  struct dxml_element *next;
} typedef dxml_element;
dxml_element recursebook_b;
dxml_element *main_tmp, *dxml_read_xml_e;
void *mallocwm_tmp;
dxml_attribute *read_attribute_new_attribute;
dxml_element *dxml_read_xml();
dxml_element *dxml_get_element_byname(dxml_element *p1) {
  return p1 = p1->next;
}

main() {
  main_tmp = dxml_read_xml();
  dxml_get_element_byname(main_tmp);
  dxml_element *tmp = dxml_get_element_byname(&recursebook_b);
  airac_observe(tmp, 0);
}

mallocwm(p1) {
  mallocwm_tmp = malloc(p1);
  mallocwm(512);
}

read_attribute() {
  read_attribute_new_attribute = read_attribute_new_attribute->next =
      mallocwm_tmp;
}

dxml_element *dxml_read_xml() {
  dxml_read_xml_e = mallocwm_tmp;
  return dxml_read_xml_e;
}
