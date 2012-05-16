#include <iostream>

using namespace std;

/* specifies the return type as type of the addition result */
template <class T, class U> auto add(const T& t, const U& u) -> decltype(t + u) {
  return t + u;
}

/* trailing return types for alternative function syntax */
auto main() -> int {

  /* lambda with explicit return type */
  auto func = [](const int& x, const int& y) -> int { return x + y; };

  cout << func(2, 3) << endl;

  cout << add(3.8, 2) << endl;
}
