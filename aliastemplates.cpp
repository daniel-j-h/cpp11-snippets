#include <iostream>
#include <tuple>

using namespace std;


/*
 * Composition is now a tuple with an int as the fixed first type
 */

template <class ... Types>
using Composition = tuple<int, Types ...>;


int main() {
  Composition<float, string> composition(1, 2.3f, "name");

  cout << get<0>(composition) << endl;
  cout << get<1>(composition) << endl;
  cout << get<2>(composition) << endl;
}

