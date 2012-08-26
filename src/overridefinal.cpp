#include <iostream>

using namespace std;

/* use final on a class to prevent inheriting; compilation error */
class A /* final */ {
  public: virtual void func(int) { cout << "A::func()" << endl; }
};

class B : A {
  /* use override to make the compiler checks that we are indeed overriding an inherited method */
  public: virtual void func(int) override { cout << "B::func()" << endl; }

  /* virtual void func(char) override {} compilation error; new method (see signature), does not override existing */
};

int main() {
  A t;
  t.func(2);

  B u;
  u.func(3);
}
