#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  vector<int> v = {6, 1, 8, 2, 7, 6};

  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));

  /* sort by lambda */
  sort(v.begin(), v.end(), [](int a, int b){ return a > b; });

  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));

  /* alt. incl. <functional> and use e.g. greater<int>() */
}
