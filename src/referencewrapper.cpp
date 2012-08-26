#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string firstWord{"camera"};
  string secondWord{"moon"};
  string thirdWord{"bed"};

  vector<string> valVec{
    firstWord, secondWord, thirdWord
  };

  /* not allowed: vector<string&>, instead use a wrapper */
  vector<reference_wrapper<string>> refVec{
    ref(firstWord), ref(secondWord), ref(thirdWord)
  };

  /* now lets change an item */
  secondWord = "sky";

  cout << "val: ";
  for(string valItem : valVec)
    cout << valItem << " ";
  cout << endl;

  cout << "ref: ";
  for(string& refItem : refVec)
    cout << refItem << " ";
  cout << endl;
}
