#include <iostream>
using namespace std;

int main() {
  cout << "너비를 입력하세요>>";

  unsigned int width;
  cin >> width;

  cout << "높이를 입력하세요>>";

  unsigned int height;
  cin >> height;

  unsigned int area = width * height;
  cout << "면적은 " << area << endl;
}