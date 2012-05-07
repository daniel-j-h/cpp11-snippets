#include <iostream>

using namespace std;

int main() {
  int *p = nullptr; /* normally you get a pointer e.g. from a function */

  if(p == nullptr)
    cout << "null" << endl;
  else
    cout << "not null" << endl;

  /* the type-safe nullptr is of type std::nullptr_t and of size sizeof(void*) */
}
