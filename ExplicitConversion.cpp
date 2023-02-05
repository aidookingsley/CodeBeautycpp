#include <iostream>
using namespace std;
class Foo {
 public:
  explicit Foo(int x) : x_(x) {}
  int x_;
};

int main() {
  Foo f1(42); // OK
  Foo f2 = 42; // Error, explicit conversion required
  return 0;
}
