#include <iostream>
#include <cstring>

using namespace std;

class A {
  private:
    int i;
  public:
    A(int i) { this->i = i; }
    int get() const { return this->i; }
    void set(int i) { this->i = i; }
};

int main() {
  A *t = new A(5);

  cout << "original object " << t->get() << endl;

  /* save object in memory area and delete original */
  char objbuf[sizeof(A)];
  memcpy(objbuf, t, sizeof(A));
  delete t;

  /* create new object and restore from memory */
  A *u = new A(0);
  memcpy(u, objbuf, sizeof(objbuf) / sizeof(char));

  cout << "restored object " << u ->get() << endl;

  delete u;
}
