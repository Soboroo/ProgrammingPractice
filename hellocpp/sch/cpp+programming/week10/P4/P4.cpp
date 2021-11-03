#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class Book {
  string title;
  int price, pages;

public:
  Book(string title = "", int price = 0, int pages = 0) {
    this->title = title;
    this->price = price;
    this->pages = pages;
  }
  void show() {
    cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
  }
  string getTitle() { return title; }
  Book &operator+=(int b) {
    this->price += b;
    return *this;
  }
  friend Book &operator-=(Book &, int);
  friend bool operator<(string &, Book &);
};

Book &operator-=(Book &a, int b) {
  a.price -= b;
  return a;
}

bool operator<(string &a, Book &b) {
  return strcmp(a.c_str(), b.title.c_str()) < 0;
}

int main() {
  cout << "20201517 우영윤" << endl;
  Book a("청춘", 20000, 300);
  string b;
  cout << "책 이름을 입력하세요>>";
  getline(cin, b);
  if (b < a)
    cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}