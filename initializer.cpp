#include <iostream>
#include <vector>

using namespace std;


void flist(initializer_list<int>);

int main() {
  const vector<int> *w = new vector<int>{1, 2, 3};

  for(vector<int>::const_iterator it = w->begin(); it != w->end(); ++it)
    cout << *it << endl;

  delete w;

  flist({4, 5, 6});
}

void flist(initializer_list<int> list) {
  for(const int *p = list.begin(); p != list.end(); ++p)
    cout << *p << endl;
}
