#include <iostream>
#include <forward_list>

using namespace std;

/*
 * stores the program's parameters in a single linked list,
 * removes consecutive duplicates and sorts them by length
 *
 * call like this: ./a.out xx y y zz zz
 */

int main(int argc, char** argv) {
  forward_list<string> arguments(argv, argv+argc);

  cout << "file name: " << arguments.front() << endl;

  arguments.pop_front();

  // note: removes consecutive (!) duplicates
  arguments.unique();

  arguments.sort([](const string& a, const string& b){ return a.length() < b.length(); });

  for(const auto arg : arguments)
    cout << arg << endl;
}
