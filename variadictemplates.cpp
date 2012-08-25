#include <iostream>

using namespace std;

/*
 * If there's more than one item we split the first one (head) off
 * and continue with the rest (tail) recursively until we are done
 */

template <class Head>
void processItem(Head item) {
  cout << item << endl;
}

template <class Head, class ... Tail>
void processItem(Head item, Tail ... tail) {
  processItem(item);
  processItem(tail ...);
}

int main() {
  processItem("Hello", "my friend", "how are you", "today?");
  processItem("Look at all those fancy types", 1, 2.3f);
}
