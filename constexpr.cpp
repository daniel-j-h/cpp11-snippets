#include <iostream>

using namespace std;

constexpr int square(int);

int main() {
  constexpr double gr = 9.81;

  cout << static_cast<double>(square(5)) * gr << endl;
}

constexpr int square(int x) {
  return x * x;
}

/* constexpr can be used at compile time and at run time, i.e. in templates or e.g. as array size */
