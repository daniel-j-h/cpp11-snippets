int main() {
  static_assert(sizeof(char) == 1, "char assert went wrong");
  static_assert(sizeof(int) == 4, "int assert went wrong");
  static_assert(sizeof(double) == 8, "double assert went wrong");

  /* compile time assertions */
}
