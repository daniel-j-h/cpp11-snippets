#include <iostream>
#include <tuple>

using namespace std;

int main() {
  tuple<int, string, double> firstRecord(42, "myFirstName", 1.303);
  tuple<int, string, double> secondRecord(21, "mySecondName", 2.638);

  auto concat = tuple_cat(firstRecord, secondRecord);

  /* for printing a tuple of any size you have to recursively use templates */
  cout << get<1>(concat) << " " << get<4>(concat) << endl;


  const int a = 1;
  const int b = 2;
  const double x = 2.34;
  const double y = 4.27;

  /* tie creates a tuple from lvalue references */
  if(tie(a, x) < tie(b, y))
    cout << "second arguments are larger" << endl;

  /*
   * use this to easily implement e.g.
   * bool operator<(const A& rhs) const { return tie(n, s, d) < tie(rhs.n, rhs.s, rhs.d); }
   */


  int f = 1;
  int g = 2;
  int h = 3;

  /* unpack variables */
  tie(f, g, h) = tie(g, f, h);

  cout << "f " << f << ", g " << g << ", h " << h << endl;
  /*
   * f=2, g=2, h=3, because it is evaluated as follows:
   * f = g;  -> f=2
   * g = f;  -> g=2
   * h = h;  -> h=3
   */
}
