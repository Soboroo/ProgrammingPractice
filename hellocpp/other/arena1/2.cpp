#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  string s;
  vector<string> v, t;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> s;
    t.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == "?") {
      char pre = 0, post = 0;
      if (i)
        pre = v[i - 1].back();
      if (i + 1 < n)
        post = v[i + 1].front();
      for (int j = 0; j < m; j++) {
        string cand = t[j];
        if (pre && post) {
          if (cand[0] == pre && cand.back() == post) {
            bool isAppreared = false;
            for (int k = 0; k < n; k++) {
              if (v[k] == cand) {
                isAppreared = true;
                break;
              }
            }
            if (!isAppreared) {
              cout << cand;
            }
          }
        } else if (post) {
          if (cand.back() == post) {
            bool isAppreared = false;
            for (int k = 0; k < n; k++) {
              if (v[k] == cand) {
                isAppreared = true;
                break;
              }
            }
            if (!isAppreared) {
              cout << cand;
            }
          }
        } else if (pre) {
          if (cand.front() == pre) {
            bool isAppreared = false;
            for (int k = 0; k < n; k++) {
              if (v[k] == cand) {
                isAppreared = true;
                break;
              }
            }
            if (!isAppreared) {
              cout << cand;
            }
          }
        } else {
          bool isAppreared = false;
          for (int k = 0; k < n; k++) {
            if (v[k] == cand) {
              isAppreared = true;
              break;
            }
          }
          if (!isAppreared) {
            cout << cand;
          }
        }
      }
    }
  }
}