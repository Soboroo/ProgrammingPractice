#include <iostream>
#include <string>
using namespace std;

int main() {
  auto love = [](string a, string b) {
    cout << a << "보다 " << b << "가 좋아?" << endl;
  };
  love("gta", "사이버펑크");
}