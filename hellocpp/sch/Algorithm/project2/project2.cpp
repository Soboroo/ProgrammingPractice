#include <algorithm>
#include <fstream>
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
    } else { //앞 집합, 뒷 집합 비교 후 임시 배열에 큰 순으로 저장
      tmp[i - p] = (*target)[idx1] > (*target)[idx2] ? (*target)[idx1++]
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
  ifstream fin("input.txt");

  int tc;
  fin >> tc; // Test Case 수 입력
  for (int i = 0; i < tc; i++) {
    int len, sum = 0;
    fin >> len; //입력 길이
    vector<int> arr(len);
    // cout << "len = " << len << ": ";
    for (int i = 0; i < len; i++)
      fin >> arr[i];
    mergeSort(&arr, 0, len - 1); //입력 받은 배열 Merge Sort
    // for_each(arr.begin(), arr.end(), [](int n) { cout << n << " "; });
    for (int i = 0; i < len - len % 3; i++) { //규칙에 따라 적절히 더함
      if (i % 3 == 2)
        continue;
      else
        sum += arr[i];
    }
    for (int i = len - len % 3; i < len; i++) //끝 나머지 더함
      sum += arr[i];
    cout << sum << endl; //결과 출력
  }
}