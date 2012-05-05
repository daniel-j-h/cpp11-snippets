#include <iostream>
#include <vector>

using namespace std;

int main() {
  const vector<int> *w = new vector<int>{1, 2, 3};

  for(vector<int>::const_iterator it = w->begin(); it != w->end(); ++it)
    cout << *it << endl;

  delete w;
}
