#include <iostream>
#include <string>
using namespace std;

class Circle {
  int radius;
  string name;

public:
  void setcircle(string name, int radius);
  double getArea();
  string getName();
};

class CircleManager {
  Circle *p;
  int size;

public:
  CircleManager(int size);
  ~CircleManager();
  void searchByname();
  void searchByArea();
};

void Circle::setcircle(string name, int radius) {
  this->name = name;
  this->radius = radius;
}

double Circle::getArea() { return radius * radius * 3.14; }

string Circle::getName() { return name; }

CircleManager::CircleManager(int size) {
  this->size = size;
  string name;
  int radius;
  p = new Circle[size];
  for (int i = 0; i < size; i++) {
    cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
    cin >> name >> radius;
    p[i].setcircle(name, radius);
  }
}

CircleManager::~CircleManager() { delete[] p; }

void CircleManager::searchByname() {
  string name;
  cout << "검색하고자 하는 원의 이름 >> ";
  cin >> name;
  for (int i = 0; i < size; i++) {
    if (p[i].getName() == name)
      cout << name << "의 면적은 " << p[i].getArea() << endl;
  }
}

void CircleManager::searchByArea() {
  int min;
  double area;
  cout << "최소 면적을 정수로 입력하세요 >> ";
  cin >> min;
  cout << min << "보다 큰 원을 검색합니다." << endl;
  for (int i = 0; i < size; i++) {
    if ((area = p[i].getArea()) > min)
      cout << p[i].getName() << "의 면적은 " << area << ",";
  }
}

int main() {
  int size;
  cout << "원의 개수 >> ";
  cin >> size;
  CircleManager cm(size);
  cm.searchByname();
  cm.searchByArea();
}