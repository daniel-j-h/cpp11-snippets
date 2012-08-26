#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  const regex pattern("(0+1+0+)");
  const string firstWord("00010");
  const string secondWord("abc00010def011110ghi");

  cout << "matched whole string: " << boolalpha << regex_match(firstWord, pattern) << endl;
  cout << "matched whole string: " << boolalpha << regex_match(secondWord, pattern) << endl;

  /*
   * <regex> is not fully implemented in the latest libstdc++,
   * e.g. regex_search, regex_replace, ... are not yet implemented
   *
   * see: http://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2011
   *
   * I compiled the following lines with clang 3.2 (trunk 157606) and -stdlib=libc++
   */

  cout << "matched sub string: " << boolalpha << regex_search(secondWord, pattern) << endl;

  cout << "replaced with X: " << regex_replace(secondWord, pattern, "X") << endl;
}
