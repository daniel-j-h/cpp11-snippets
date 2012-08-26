class A {
  public:
    A() = default; /* explicit default constructor */
    A& operator=(const A&) = delete;
    A(const A&) = delete;

    void func(double);
    void func(int) = delete;
};

int main() {
  A t;

  /* compile time error t.func(3); */
}
