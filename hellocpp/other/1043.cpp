#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n + 1);
  int k;
  cin >> k;
  vector<int> known;
  for (int i = 0; i < k; i++) {
    int x;
    cin >> x;
    known.push_back(x);
  }
  vector<vector<int>> group(m);
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      int y;
      cin >> y;
      group[i].push_back(y);
    }
  }
}