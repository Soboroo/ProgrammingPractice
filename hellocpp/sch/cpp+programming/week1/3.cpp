#include <iostream>
using namespace std; //만악의 근원~

int main() {
  int n[10];
  double d[] = {0.1, 0.2, 0.5, 3.9};
  int i;
  for (i = 0; i < 10; i++)
    n[i] = i * 2;
  for (i = 0; i < 10; i++)
    cout << n[i] << ' ';
  cout << endl;

  double sum = 0;
  for (i = 0; i < 4; i++) {
    sum += d[i];
  }
  cout << "배열 d의 합은 " << sum;
}