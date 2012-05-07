#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  unordered_set<int> uniq({4, 1, 4, 5, 4, 3, 2});

  cout << "size " << uniq.size() << endl;

  for(auto x : uniq)
    cout << x << endl;

  /* see also unordered_multiset, unordered_map, unordered_multimap */
}
