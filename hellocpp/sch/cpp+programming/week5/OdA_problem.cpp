#include <iostream>
using namespace std;

class Circle {
  int radius;

public:
  Circle();
  Circle(int r);
  void setRadius(int r) { radius = r; }
  double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() { radius = 1; }

Circle::Circle(int r) { radius = r; }

int main() {
  int n, m, result = 0;
  cout << "생성할 원의 개수?>>";
  cin >> n;

  Circle *pArray = new Circle[n];
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 원>> ";
    cin >> m;
    pArray[i].setRadius(m);
    if (pArray[i].getArea() <= 200 && pArray[i].getArea() >= 100)
      result++;
  }
  for (int i = 0; i < n; i++)
    cout << pArray[i].getArea() << ' ';
  cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << result << endl;
  delete[] pArray;
}