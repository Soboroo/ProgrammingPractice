#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using list = pair<string, vector<int>>;

bool compare(list &a, list &b) {
  vector<int> &v1 = a.second;
  vector<int> &v2 = b.second;
  for (int i = 0; i < v1.size(); i++)
    if (v1[i] > v2[i])
      return !(i % 2);
    else if (v1[i] < v2[i])
      return i % 2;
  return a.first < b.first;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<list> score(n);
  for (int i = 0; i < n; i++) {
    cin >> score[i].first;
    for (int j = 0; j < 3; j++) {
      int t;
      cin >> t;
      score[i].second.push_back(t);
    }
  }
  sort(score.begin(), score.end(), compare);
  for (int i = 0; i < n; i++)
    cout << score[i].first << '\n';
}