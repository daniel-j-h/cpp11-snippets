#include <iostream>
#include <tuple>

using namespace std;


/*
 * Default first type of the tuple is int; opt. specify other type
 * see also the alias templates example
 */

template <class Key = int, class ... Types>
tuple<Key, Types ...> makeComposition(Key key, Types ... types) {
  return make_tuple(key, types ...);
}


int main() {
  auto composition = makeComposition(1, 2.3f, "name");

  cout << get<0>(composition) << endl;
  cout << get<1>(composition) << endl;
  cout << get<2>(composition) << endl;
}
