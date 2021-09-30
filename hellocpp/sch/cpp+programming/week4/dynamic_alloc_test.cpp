#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;
  int *array = NULL;

  cout << "입력할 정수의 개수는?";
  cin >> n;
  array = new int[n];
  if (!array) {
    cout << "메모리 할당 에러";
    return 0;
  }
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 정수: ";
    cin >> array[i];
    sum += array[i];
  }
  cout << "합 = " << sum;
  delete[] array;
}