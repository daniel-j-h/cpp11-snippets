#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

/* compile wirh -lpthread */

/*
 * Prefer std::lock_guard over mutex.lock() and mutex.unlock(),
 * because the guard is exception-safe by using the RAII paradigm
 *
 * see also unique_lock, timed_mutex, recursive_mutex, recursive_timed_mutex
 */

void runUnsynchronized() {
  long sharedCounter = 0;

  /* simply increment in each thread the shared counter */
  auto increment = [&sharedCounter](){
    for(int i = 0; i < 1000; ++i)
      ++sharedCounter;
  };

  thread firstThread(increment);
  thread secondThread(increment);

  firstThread.join();
  secondThread.join();

  cout << "unsynchronized shared counter: " << sharedCounter << " (expected to be 2000)" << endl;
}

void runSynchronized() {
  long sharedCounter = 0;
  mutex sharedMutex;

  /* locks the mutex and increments; guard is destroyed by leaving scope */
  auto increment = [&sharedCounter, &sharedMutex](){
    lock_guard<mutex> scopedMutex(sharedMutex);

    for(int i = 0; i < 1000; ++i)
      ++sharedCounter;
  };

  thread firstThread(increment);
  thread secondThread(increment);

  firstThread.join();
  secondThread.join();

  cout << "synchronized shared counter: " << sharedCounter << " (expected to be 2000)" << endl;
}

int main() {
  runUnsynchronized();
  runSynchronized();
}
