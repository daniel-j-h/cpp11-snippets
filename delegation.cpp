#include <iostream>

using namespace std;

class myClass {
  public:
    explicit myClass(int i) { cout << "constructed with " << i << endl; }
    explicit myClass() : myClass(0) {}
};

int main() {
  myClass m; /* constructed with 0 */
}
