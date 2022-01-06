#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
int solution(vector<int> sc, int K) {
  int answer = 0;
  ll n, m, t;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  for (ll i : sc)
    if (i < K)
      pq.push(i);
  if (pq.empty())
    return 0;

  while (pq.size() > 1) {
    n = pq.top();
    pq.pop();
    m = pq.top() * 2;
    pq.pop();

    t = n + m;
    answer++;
    if (t < K || pq.size() == 1)
      pq.push(t);
  }
  return pq.size() ? -1 : answer;
}

int main() {
  vector<int> sc = {1, 2};
  int k = 0;
  cout << solution(sc, k) << endl;
}