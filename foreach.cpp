#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3};

  for(auto x : v)
    cout << x << endl;

  /* see also for_each(v.begin(), v.end(), func) */
}
