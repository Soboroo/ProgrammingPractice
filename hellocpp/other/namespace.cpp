#include <iostream>
using namespace std;

namespace sch {
int num_a;
int num_b;
} // namespace sch

int main() {
  sch::num_a = 10;
  int num_a = 5;
  cout << sch::num_a << ' ' << num_a << endl;
}