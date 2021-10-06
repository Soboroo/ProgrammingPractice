#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> *target, int p, int q, int r) {
  int len = r - p + 1;
  vector<int> tmp(len);

  int idx1 = p, idx2 = q + 1;
  for (int i = p; i <= r; i++) {
    if (idx1 == q + 1) { //앞 집합에서 모든 원소 사용
      tmp[i - p] = (*target)[idx2++];
    } else if (idx2 == r + 1) { //뒷 집합에서 모든 원소 사용
      tmp[i - p] = (*target)[idx1++];
    } else { //앞 집합, 뒷 집합 비교 후 임시 배열에 작은 순으로 저장
      tmp[i - p] = (*target)[idx1] < (*target)[idx2] ? (*target)[idx1++]
                                                     : (*target)[idx2++];
    }
  }
  for (int i = p; i <= r; i++) {
    (*target)[i] = tmp[i - p];
  }
}

void mergeSort(vector<int> *v, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    mergeSort(v, p, q);
    mergeSort(v, q + 1, r);
    merge(v, p, q, r);
  }
}

int main() {
  vector<int> v(10);
  srand((unsigned)time(0));
  generate(v.begin(), v.end(), rand);
  for (int i = 0; i < 10; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  mergeSort(&v, 0, v.size() - 1);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}