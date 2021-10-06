// Encoded in UTF-8(65001)
// Compile with g++ (MinGW)

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
  cout << "-----Input-----" << endl;
  for (int i = 0; i < size; i++) {
    cout << "#" << i + 1 << ": ";
    cin >> p[i];
  }
  cout << endl;
}

void Sample::write() {
  cout << "-----Output-----" << endl;
  for (int i = 0; i < size; i++)
    cout << "#" << i + 1 << ": " << p[i] << endl;
  cout << endl;
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
  cout << "20201517 우영윤" << endl;
  Sample s(10);
  s.read();
  s.write();
  cout << "가장 큰 수는 " << s.big() << endl;
}