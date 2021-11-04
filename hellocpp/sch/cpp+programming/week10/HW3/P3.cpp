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
  bool operator!() { return this->price == 0; }
};

Book &operator-=(Book &a, int b) {
  a.price -= b;
  return a;
}

int main() {
  cout << "20201517 우영윤" << endl;
  Book book("벼룩시장", 0, 50);
  if (!book)
    cout << "공짜다" << endl;
}