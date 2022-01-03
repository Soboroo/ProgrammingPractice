#include <iostream>
using namespace std;

int main() {
  int N;
  int min = INT_MAX, max = INT_MIN;
  int tmp;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    min = min < tmp ? min : tmp;
    max = max > tmp ? max : tmp;
  }
  cout << min << " " << max << endl;
}