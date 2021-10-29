#include <iostream>
using namespace std;

bool average(int a[], int size, int &avg) {
  if (size <= 0)
    return false; //평균이 유효한가?
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += a[i];
  avg = sum / size; //그럼 avg 에 Call by reference로 값 전달
  return true;
}

int main() {
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if (average(x, 6, avg))
    cout << "평균은 " << avg << endl;
  else
    cout << "매개 변수 오류" << endl;

  if (average(x, -2, avg))
    cout << "평균은 " << avg << endl;
  else
    cout << "매개 변수 오류" << endl;
}