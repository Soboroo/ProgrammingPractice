#include <iostream>
#include <vector>
using namespace std;

bool isEnd(vector<int> &v) {
  if (v.size() == 1)
    return true;
  for (int i = 0; i < v.size() - 1; i++)
    if (v[i + 1] - v[i] != 1)
      return false;
  return true;
}

void backtrace(vector<int> &a, int n, int k, int &count) {
  if (n == count) {
    for (auto i : a) {
      cout << i;
    }
  } else {
    if (isEnd(a)) {
      if (a[0] == 9) {
        a.push_back(0);
        for (int i = 0; i < a.size(); i++)
          a[i] = a.size() - i - 1;
        k++;
        backtrace(a, n, k, ++count);
      } else {
        a.push_back(a[0] + 1);
        for (int i = 0; i < a.size(); i++) {
          a[i] = a.size() - i - 1;
        }
        backtrace(a, n, k, count);
      }
    }
  }
}

int main() {
  int n, m = 0;
  cin >> n;
  vector<int> a(1);
}