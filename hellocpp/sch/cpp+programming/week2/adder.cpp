#include <iostream>
// using namespace std;

int adder(int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}

int main() {
  int n = adder(24567, 98374);
  std::cout << "24567과 98374의 합은 " << n << "입니다\n";
  int a, b;
  std::cout << "두 개의 정수를 입력하세요>>";
  std::cin >> a >> b;
  std::cout << a << "와 " << b << "의 합은 " << adder(a, b) << "입니다\n";
}