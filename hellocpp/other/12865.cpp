#include <iostream>
#include <map>
#include <stack>
using namespace std;
map<int, int> goondaerani;
stack<map<int, int>> s;
int n, k;
int knapsack(int index, int size) {
  if (size > k)
    return size;
  else {
  }
}

int main() {

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    goondaerani.insert(make_pair(x, y));
  }
}