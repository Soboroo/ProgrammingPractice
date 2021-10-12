#include <iostream>
using namespace std;

int main() {
  cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
  int i = 1;
  int n = 2;
  int &refn = n;
  n = 4;
  refn++;
  cout << i << '\t' << n << '\t' << refn << endl;

  refn = i; //참조 변경 X, refn 이 가리키는 곳에 i를 대입
  refn++;
  cout << i << '\t' << n << '\t' << refn << endl;

  int *p = &refn; // n의 주소 넘겨줌 &n
  *p = 20;
  cout << i << '\t' << n << '\t' << refn << endl;
}