#include <iostream>
#include <random>
#include <map>

using namespace std;

int main() {
  /*
   * engine:                      speed:    storage requirement:    quality:
   *
   * linear_congruential_engine     +             ++                  +
   * mersenne_twister_engine        +             -                   ++
   * subtract_with_carry_engine     ++            +                   +
   */

  random_device device;
  mt19937 generator(device());
  uniform_int_distribution<int> udistribution(2, 7);
  binomial_distribution<int> bdistribution(5, 0.5);

  map<int, int> histogram;

  cout << "mersenne twister, uniform distribution(2, 7):" << endl;

  for(int i = 0; i < 10000; ++i)
    ++histogram[udistribution(generator)];
  for(auto x : histogram)
    cout << x.first << '\t' << string(x.second / 50, '*') << endl;
  histogram.clear();

  cout << "mersenne twister, binomial distribution(5, 0.5):" << endl;

  for(int i = 0; i < 10000; ++i)
    ++histogram[bdistribution(generator)];
  for(auto x : histogram)
    cout << x.first << '\t' << string(x.second / 50, '*') << endl;
  histogram.clear();


  /* many different engines and distributions are defined, so look them up */
}
