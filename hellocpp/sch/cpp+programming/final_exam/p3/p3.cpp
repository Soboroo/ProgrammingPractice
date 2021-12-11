#include <iostream>
#include <stack>
using namespace std;

template <class T> class AbstractStack {
public:
  virtual bool push(T n) = 0;
  virtual bool pop(T &n) = 0;
  virtual int size(T n) = 0;
};

template <class T> class InStack : public AbstractStack<T> {
  stack<T> myStack;
  int len;

public:
  InStack(int len) { this->len = len; }
  bool push(T n) {
    if (myStack.size() == len)
      return false;
    else {
      myStack.push(n);
      return true;
    }
  };
  bool pop(T &n) {
    if (myStack.empty())
      return false;
    else {
      n = myStack.top();
      myStack.pop();
      return true;
    }
  }
  int size(T n) { return len; }
};

int main() {
  cout << "20201517 우영윤\n";
  InStack<double> a(5);
  for (int i = 1; i <= 7; i++) {
    if (a.push(i * 0.1))
      cout << "push 성공" << endl;
    else
      cout << "'스택이 가득 찼습니다.\n";
  }

  double n;
  for (int i = 1; i <= 7; i++) {
    if (a.pop(n))
      cout << "pop 성공 " << n << endl;
    else
      cout << "스택이 비었습니다.\n";
  }
}