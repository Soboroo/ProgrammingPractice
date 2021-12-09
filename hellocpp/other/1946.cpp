#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m;
    int result = 0;
    vector<pair<int, int>> arr;
    vector<int> num(m, 200000);
    for (int j = 0; j < m; j++) {
      cin >> a >> b;
      arr.push_back(pair<int, int>(a, b));
    }
    sort(arr.begin(), arr.end());

    for (int j = 1; j < m; j++)
      num[j] = num[j - 1] > arr[j - 1].second ? arr[j - 1].second : num[j - 1];

    for (int j = 0; j < m; j++)
      result += arr[j].second < num[j];
    cout << result << endl;
  }
}