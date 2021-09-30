#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Random {
public:
  Random();
  int next();
  int nextInRange(int, int);
};

Random::Random() { srand((unsigned)time(0)); }

int Random::next() { return rand(); }

int Random::nextInRange(int a, int b) {
  return rand() % (abs(a - b) + 1) + min(a, b);
}

int main() {
  cout << "20201517 우영윤" << endl;
  Random r;
  cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
  for (int i = 0; i < 10; i++) {
    int n = r.next();
    cout << n << ' ';
  }
  cout << endl
       << endl
       << "-- 2에서 "
       << "4 까지의 랜덤 정수 10 개 --" << endl;
  for (int i = 0; i < 10; i++) {
    int n = r.nextInRange(20, 14);
    cout << n << ' ';
  }
  cout << endl;
}