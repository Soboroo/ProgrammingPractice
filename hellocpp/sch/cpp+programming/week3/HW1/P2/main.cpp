#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class SelectableRandom {
public:
  SelectableRandom();
  int next();
  int nextInRange(int, int);
};

SelectableRandom::SelectableRandom() { srand((unsigned)time(0)); }

int SelectableRandom::next() { return nextInRange(-1, RAND_MAX - 1) + 1; }

int SelectableRandom::nextInRange(int a, int b) {
  int x = a / 2, y = b / 2;
  return (rand() % (abs(x - y) + max(a, b) % 2) + min(x, y)) * 2 + 1;
}

int main() {
  cout << "20201517 우영윤" << endl;
  SelectableRandom r;
  cout << "-- 0에서" << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
  for (int i = 0; i < 10; i++) {
    int n = r.next();
    cout << n << ' ';
  }
  cout << endl
       << endl
       << "-- 2에서 "
       << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
  for (int i = 0; i < 10; i++) {
    int n = r.nextInRange(2, 9);
    cout << n << ' ';
  }
  cout << endl;
}