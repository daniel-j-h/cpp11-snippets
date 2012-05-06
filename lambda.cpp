#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  vector<int> v = {6, 1, 8, 2, 7, 6};

  copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

  /* sort by lambda */
  sort(v.begin(), v.end(), [](int a, int b){ return a > b; });

  copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

  /* alt. incl. <functional> and use e.g. greater<int>() */
}
