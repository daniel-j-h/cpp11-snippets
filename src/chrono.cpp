/*
 * workaround: needs to be defined in order to get the sleep method to work
 * see: /usr/include/c++/4.4.5/thread
 */
#define _GLIBCXX_USE_NANOSLEEP

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
  /*
   * nanoseconds
   * microseconds
   * milliseconds
   * seconds
   * minutes
   * hours
   */

  const chrono::seconds sec(chrono::hours(1) + chrono::minutes(9) + chrono::seconds(8));
  cout << "1h 9m 8s = " << sec.count() << "s" << endl;

  /* get the duration of a section */
  const auto start(chrono::steady_clock::now());
  this_thread::sleep_for(chrono::seconds(3));
  const auto end(chrono::steady_clock::now());

  chrono::nanoseconds duration(end - start);

  cout << "duration of section: " << duration.count() << "ns"<< endl;
  cout << "duration of section: " << chrono::duration_cast<chrono::microseconds>(duration).count() << "ms"<< endl;
}
