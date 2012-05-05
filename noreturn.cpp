using namespace std;

[[ noreturn ]] void f();

int main() {
  /* f(); terminates only by throwing */
}

[[ noreturn ]] void f() {
  throw "not yet implemented";
}
