#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x = 1.333;
  float y = 3.461;
  float z = 9.023;

  /* (x*y)+z, rounded as one ternary operation */
  cout << "fma " << fma(x, y, z) << endl;

  /* sqrt(x^2 + y^2) */
  cout << "hypot " << hypot(x, y) << endl;

  /* NaN handling */
  cout << "NaN " << isnan(z) << endl;

  /* many cool new math functions, just look them up */
}
