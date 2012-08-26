#include <iostream>
#include <thread>

using namespace std;

/* compile with -lpthread */

class Runnable {
  private:
    int value;
  public:
    explicit Runnable(int _value) : value(_value) {}
    void operator()() const { cout << "thread, value is " << value << endl; }
};

int main() {
  /* opt. use myThread(func, arg0, arg1, ...) for threaded functions */
  Runnable myRunnable(3);
  thread myThread(myRunnable);

  myThread.join();

  /*
   * use lock_guard<mutex> to synchronize a scope
   * or manage the critical section manually by using mutex
   *
   * avoid deadlocks by locking more than one mutex with lock(m0, m1, ...)
   * transfer, unlock after scope: lock_guard<mutex> guard(m0, adopt_lock);
   */
}
