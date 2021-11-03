#include <iostream>
#include <vector>
using namespace std;

class Stack {
  vector<int> array;

public:
  Stack &operator<<(int a) {
    array.push_back(a);
    return *this;
  }
  Stack &operator>>(int &a) {
    a = array.back();
    array.pop_back();
    return *this;
  }
  bool operator!() { return array.empty(); }
};

int main() {
  cout << "20201517 우영윤" << endl;
  Stack stack;
  stack << 3 << 5 << 10;
  while (true) {
    if (!stack)
      break;
    int x;
    stack >> x;
    cout << x << ' ';
  }
  cout << endl;
}