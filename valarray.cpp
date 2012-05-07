#include <iostream>
#include <valarray>

using namespace std;

template<class T>
void valprint(valarray<T> v) {
  for(int i = 0; i < static_cast<int>(v.size()); ++i)
    cout << v[i] << " ";
  cout << endl;
}

int main() {
  /* optimized value array */
  valarray<int> v({1, 2, 3, 4, 5, 6, 7, 8});
  valarray<int> w({4, 7, 9, 2, 7, 2, 4, 9});

  cout << "v: ";
  valprint(v);

  cout << "sum " << v.sum() << endl;
  cout << "min " << v.min() << endl;
  cout << "max " << v.max() << endl;

  /* note: v is still the same, shift and cshift are returning new valarrays */

  cout << "shift(2): ";
  valprint(v.shift(2));

  cout << "cshift(2): ";
  valprint(v.cshift(2));

  /* valarray<T>.apply() is basically the same as for_each */

  /* math on valarrays */
  valarray<int> result((v^(v*w))+v);
  cout << "(v^(v*w))+v: ";
  valprint(result);

  /* "Any function returning a valarray is permitted to return an object of another type" */
}
