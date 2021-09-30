#include <iostream>
using namespace std;

class Sample {
  int *p;
  int size;

public:
  Sample(int n) {
    size = n;
    p = new int[n];
  }
  void read();
  void write();
  int big();
  ~Sample();
};

void Sample::read() {
  for (int i = 0; i < size; i++) {
    cout << "#" << i + 1 << ": ";
    cin >> p[i];
  }
}

void Sample::write() {
  for (int i = 0; i < size; i++)
    cout << "#" << i + 1 << ": " << p[i] << endl;
}

int Sample::big() {
  int max = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (max < p[i])
      max = p[i];
  }
  return max;
}

Sample::~Sample() { delete[] p; }

int main() {
  Sample s(10);
  s.read();
  s.write();
  cout << "가장 큰 수는 " << s.big() << endl;
}