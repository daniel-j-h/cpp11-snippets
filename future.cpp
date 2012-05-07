#include <iostream>
#include <future>

using namespace std;

/* compile wirh -lpthread */

int cfunc() {
  return 42; /* do your async calc here */
}

int main() {
  /* launch::async = asynchronous eval., launch::deferred = lazy eval. */
  future<int> result = async(launch::async, cfunc);

  /* do other stuff, while the future result is calculated */

  cout << "we need the result now, and it is: " << result.get() << endl;
}
