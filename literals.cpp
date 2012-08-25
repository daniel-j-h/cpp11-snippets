#include <iostream>

using namespace std;

/*
 * ask yourself this: do you really need user defined literals?
 */

class Inch {
  public:
    explicit Inch() : Inch(0) { }
    explicit Inch(double value_) : value(value_) { }

    double toCentimeter() const { return value * 2.54; }

  private:
    double value = 0;
};

Inch operator "" _inch(long double arg) {
  return Inch(arg);
}

int main() {
  cout << (1.0_inch).toCentimeter() << " centimeter" << endl;
}
