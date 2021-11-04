// (Book, Book), (Book, int): 맴버 함수 구현, (Book, string): 외장 함수 구현
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
    cout << title << ' ' << price << "원 " << pages << "페이지 " << endl;
  }
  string getTitle() { return title; }
  Book &operator+=(int b) {
    this->price += b;
    return *this;
  }
  friend Book &operator-=(Book &, int);
  bool operator==(Book &b) {
    return this->title == b.title && this->price == b.price &&
           this->pages == b.pages;
  }
  friend bool operator==(Book &, string);
  bool operator==(int b) { return this->price == b; }
};

bool operator==(Book &a, string b) {
  return strcmp(a.title.c_str(), b.c_str()) == 0;
}

Book &operator-=(Book &a, int b) {
  a.price -= b;
  return a;
}

int main() {
  cout << "20201517 우영윤" << endl;
  Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
  if (a == 30000)
    cout << "정가 30000원" << endl;
  if (a == "명품 C++")
    cout << "명품 C++ 입니다." << endl;
  if (a == b)
    cout << "두 책이 같은 책입니다." << endl;
}