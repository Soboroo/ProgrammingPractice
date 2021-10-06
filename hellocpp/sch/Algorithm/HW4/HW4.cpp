#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(vector<int> *, int, int);
void merge(vector<int> *, int, int, int);
void mergeSort(vector<int> *, int, int);
int partition(vector<int> *, int, int);
void quickSort(vector<int> *, int, int);
void printfor(int n) { cout << n << " "; }

int main() {
  vector<int> original(10);
  // Merge Sort, Quick Sort 시 같은 vector 복사 후 동일 vector 사용
  srand((unsigned)time(0));
  cout << fixed;
  cout.precision(6); //소숫점 고정

  generate(original.begin(), original.end(), rand);
  //각 요소를 rand() 반환값으로 대입
  cout << "Original: ";
  for_each(original.begin(), original.end(), printfor);
  cout << endl;

  vector<int> copied(original);
  mergeSort(&copied, 0, copied.size() - 1);
  cout << "Merge Sort: ";
  for_each(copied.begin(), copied.end(), printfor);
  cout << endl;

  copied = original;
  quickSort(&copied, 0, copied.size() - 1);
  cout << "Quick Sort: ";
  for_each(copied.begin(), copied.end(), printfor);
  cout << endl;

  original.resize(100000);
  copied.resize(100000);
  double start, end;

  for (int i = 0; i < 5; i++) {
    generate(original.begin(), original.end(), rand);
    copied = original;

    start = clock();
    mergeSort(&copied, 0, copied.size() - 1);
    end = clock();
    cout << "Merge Sort: " << (end - start) / CLOCKS_PER_SEC << "sec ";

    copied = original;
    // Merge Sort된 vector를 그대로 사용할 시 최악의 경우.
    // n=1e6에서 약 20초 소요 O(n^2)

    start = clock();
    quickSort(&copied, 0, copied.size() - 1);
    end = clock();
    cout << "Quick Sort: " << (end - start) / CLOCKS_PER_SEC << "sec" << endl;
  }
  cout << endl << "When Sorted;" << endl;

  start = clock();
  mergeSort(&copied, 0, copied.size() - 1);
  end = clock();
  cout << "Merge Sort: " << (end - start) / CLOCKS_PER_SEC << "sec ";

  start = clock();
  quickSort(&copied, 0, copied.size() - 1);
  end = clock();
  cout << "Quick Sort: " << (end - start) / 1000 << "sec" << endl;
}

void swap(vector<int> *target, int p, int r) {
  int tmp = (*target)[p];
  (*target)[p] = (*target)[r];
  (*target)[r] = tmp;
}

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

int partition(vector<int> *target, int p, int r) {
  int i = p, j = p; // i는 pivot보다 작은 값들 보다 1 큼
  while (j <= r) {
    if ((*target)[j] < (*target)[r])
      swap(target, i++, j); //작은 값+1 위치에 j(큰 값)와 교환 후 인덱스 증가
    j++;
  }
  swap(target, r, i);
  return i;
}

void quickSort(vector<int> *v, int p, int r) {
  if (p < r) {
    int q = partition(v, p, r);
    quickSort(v, p, q - 1);
    quickSort(v, q + 1, r);
  }
}