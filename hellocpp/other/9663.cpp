#include <iostream>
#include <vector>
using namespace std;

vector<int> chess;
int answer = 0;
bool check(int x, int y) {
  if (chess.size() == 0)
    return true;
  if (x < 0 || x >= chess.size() || y < 0 || y >= chess.size())
    return false;
  if (chess[x] == 0)
    return true;
  if (chess[x] == chess[y])
    return false;
  return true;
}

void backtrack(vector<int> &v, int n, int k) {
  if (k == n) {
    answer++;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (check(k, i)) {
      v[k] = i;
      backtrack(v, n, k + 1);
      v.pop_back();
    }
  }
}

int main() {
  int n;
  cin >> n;
  chess.resize(n);
  backtrack(chess, n, 0);
  return 0;
}