#include <iostream>

using namespace std;

int main() {
  const char a[] = u8"utf-8 \u2018";
  auto regex(R"(a\bc"d)");

  cout << regex << endl;
  cout << a << endl;
}
