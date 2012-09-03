#include <iostream>
#include <string>

using namespace std;


class Fruit {
  public:
    Fruit(string& label_) : label(label_) { }
    Fruit(string&& label_) : label(move(label_)) { }

    /* copy constructor*/
    Fruit(const Fruit& other) : label(other.label) {
      cout << "copy constructor" << endl;
    }

    /* copy assign */
    Fruit& operator=(Fruit& other) {
      cout << "copy assign" << endl;

      label = other.label;
      return *this;
    }

    /* move constructor */
    Fruit(Fruit&& other) : label(move(other.label)) {
      cout << "move constructor" << endl;
    }

    /* move assign */
    Fruit& operator=(Fruit&& other) {
      cout << "move assign" << endl;

      label = move(other.label);
      return *this;
    }

    string getLabel() { return label; }

  private:
    string label;
};


int main() {
  Fruit firstFruit("extra juicy");

  /* copy */
  Fruit secondFruit(firstFruit);
  /* move */
  Fruit thirdFruit(move(firstFruit));

  /* copy */
  secondFruit = thirdFruit;
  /* move */
  firstFruit = move(thirdFruit);
}
