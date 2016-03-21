HandleError(def) {
  if (def)
    def = "";
  else
    airac_observe(def, 0);
}

ReadProgram() {
  HandleError("fopen");
  HandleError("realloc");
}
