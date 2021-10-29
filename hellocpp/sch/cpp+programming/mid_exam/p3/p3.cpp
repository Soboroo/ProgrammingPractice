#include <iostream>
using namespace std;

int main() {
  cout << "20201517 우영윤" << endl;
  int n;
  double sum = 0;
  cout << "입력할 실수의 개수는? ";
  cin >> n;
  double *arr = new double[n];
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 실수: ";
    cin >> arr[i];
    sum += arr[i];
  }
  cout << "합 = " << sum << endl;
  cout << "평균 = " << sum / n << endl;
}