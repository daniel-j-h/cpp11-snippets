#include <iostream>
#include <string>

using namespace std;


/* gcc >= 4.6 for nullptr support needed; this is a workaround: */
const class {
  public:
    template<class T>
    operator T*() const { return 0; }

    template<class C, class T>
    operator T C::*() const { return 0; }

  private:
    void operator&() const;
} nullptr = {};


int main() {
  char *p;

  if(p == nullptr)
    cout << "null" << endl;
  else
    cout << "not null" << endl;
}

