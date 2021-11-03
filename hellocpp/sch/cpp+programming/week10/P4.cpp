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
    cout << title << ' ' << price << "�� " << pages << "������" << endl;
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

bool operator<(string &a, Book &b) { return a < b.title; }

int main() {
  cout << "20201517 �쿵��" << endl;
  Book a("û��", 20000, 300);
  string b;
  cout << "å �̸��� �Է��ϼ���>>";
  getline(cin, b);
  if (b < a)
    cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}