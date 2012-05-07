#include <iostream>
#include <memory>

using namespace std;

int main() {
  unique_ptr<int> uptr1(new int(5)); /* only uptr1 manages the memory, only able to move or swap the ownership */
  unique_ptr<int> uptr2(move(uptr1)); /* now uptr2 manages the memory, uptr1 is invalid */

  cout << "unique_ptr\tuptr2 points to memory address " << uptr2.get() << ", with content " << *uptr2.get() << endl;

  uptr1.reset(); /* does nothing */
  uptr2.reset(); /* deletes the memory */

  if(!uptr1 && !uptr2)
    cout << "unique_ptr\tboth do not own an object, memory was successfully deleted" << endl;


  shared_ptr<int> sptr1(new int(10));
  shared_ptr<int> sptr2(sptr1);

  /*
   * note on performance: statements above perform two memory allocations; only one with
   * auto sptr = make_shared<int>(10);
   */

  cout << "shared_ptr\tref count is " << sptr2.use_count() << endl;
  sptr1.reset();
  cout << "shared_ptr\tref count is " << sptr2.use_count() << endl;
  sptr2.reset();

  if(!sptr1 && !sptr2)
    cout << "shared_ptr\tboth do not own an object, memory was successfully deleted" << endl;


  /* see also weak_ptr */
}
