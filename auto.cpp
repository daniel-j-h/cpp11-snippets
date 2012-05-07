#include <iostream>
#include <vector>

using namespace std;

int main() {
  auto i = 3;
  decltype(i) a; /* a has now the type of i */
  auto l = {1, 2, 3}; /* l has now the type initializer_list */

  auto v = vector<int>({4, 5, 6});

  for(auto x : v)
    cout << x << endl;
}
