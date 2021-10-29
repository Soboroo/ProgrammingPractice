#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> *t, int p, int q, int r) {
  vector<int> tmp(r - p + 1);
  int a = p, b = q + 1;
  for (int i = p; i <= r; i++) {
    if (a > q) //앞 집합에서 모든 원소 사용
      tmp[i - p] = (*t)[b++];
    else if (b > r) //뒷 집합에서 모든 원소 사용
      tmp[i - p] = (*t)[a++];
    else //앞 집합, 뒷 집합 비교 후 임시 배열에 큰 순으로 저장
      tmp[i - p] = (*t)[a] > (*t)[b] ? (*t)[a++] : (*t)[b++];
  }
  for (int i = p; i <= r; i++) {
    (*t)[i] = tmp[i - p];
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
    for (int i = 0; i < len; i++)
      fin >> arr[i];
    mergeSort(&arr, 0, len - 1);  //입력 받은 배열 Merge Sort
    for (int i = 0; i < len; i++) //규칙에 따라 적절히 더함
      sum += i % 3 == 2 ? 0 : arr[i];
    cout << sum << endl; //결과 출력
  }
}