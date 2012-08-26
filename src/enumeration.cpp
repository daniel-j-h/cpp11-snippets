#include <iostream>

using namespace std;

/* type-safe enumeration, underlying type can be overridden */
enum class Direction : unsigned int {
  North,
  East,
  South,
  West
};

int main() {
  Direction driving = Direction::North;

  if(driving == Direction::North)
    cout << "dragons ahead" << endl;
}
