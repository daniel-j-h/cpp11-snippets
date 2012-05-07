#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void flist(initializer_list<int>);

int main() {
  /* we use a scoped ptr for ease of use; initialize vector with values */
  const unique_ptr<vector<int>> v(new vector<int>{1, 2, 3});

  for(auto x : *v)
    cout << x << endl;

  flist({4, 5, 6});
}

void flist(initializer_list<int> list) {
  for(auto x : list)
    cout << x << endl;
}
