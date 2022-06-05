#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  map<int, int> m;
  stack<pair<int, int>> s;
  while (n--) {
    int x;
    cin >> x;
    v.push_back(x);
    m[x]++;
  }
}