#include <iostream>
#include <string>

using namespace std;


/* takes an lvalue reference */
void getPackage(string& desc) {
  cout << desc << ", getPackage called with lvalue reference" << endl;
}

/* takes an rvalue reference */
void getPackage(string&& desc) {
  cout << desc << ", getPackage called with rvalue reference" << endl;
}


int main() {
  string desc("first description");

  /* called with lvalue */
  getPackage(desc);

  /* called with rvalue; temp object */
  getPackage(string("second description"));;

  /* see also the move semantic example */
}
