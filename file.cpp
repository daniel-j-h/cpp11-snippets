#include <iostream>
#include <string>
#include <fstream>
#include <unordered_set>

using namespace std;

void funiq(const string &file) {
  fstream myFile;
  string linebuf;
  unordered_set<string> uniq;

  try {
    /* only set flags for opening, otherwise we always get a eof exception */
    myFile.exceptions(ios_base::failbit | ios_base::badbit);
    myFile.open(file, ios_base::in);
    myFile.exceptions(ios_base::goodbit);

    /* insert each line to hashset */
    while(getline(myFile, linebuf))
       uniq.insert(linebuf);

  } catch(const ios_base::failure &e) {
    cout << "error reading file: " << e.what() << endl;
  }

  /* not sorted, b/c of unordered_set */
  for(auto it = uniq.cbegin(); it != uniq.cend(); ++it)
    cout << *it << endl;
}

int main() {
  /* print unique lines */
  funiq("file.cpp");
}

/* see input stream handling for a 'uniq' program, to pipe content into */
