// Encoded in EUC-KR(949)
// Compile with Visual C++ (vsdevcmd)

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
    cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
    cin >> name >> radius;
    p[i].setcircle(name, radius);
  }
}

CircleManager::~CircleManager() { delete[] p; }

void CircleManager::searchByname() {
  string name;
  cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
  cin >> name;
  for (int i = 0; i < size; i++) {
    if (p[i].getName() == name)
      cout << name << "�� ������ " << p[i].getArea() << endl;
  }
}

void CircleManager::searchByArea() {
  int min;
  double area;
  cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
  cin >> min;
  cout << min << "���� ū ���� �˻��մϴ�." << endl;
  for (int i = 0; i < size; i++) {
    if ((area = p[i].getArea()) > min)
      cout << p[i].getName() << "�� ������ " << area << ",";
  }
}

int main() {
  cout << "20201517 �쿵��" << endl;
  int size;
  cout << "���� ���� >> ";
  cin >> size;
  CircleManager cm(size);
  cm.searchByname();
  cm.searchByArea();
}