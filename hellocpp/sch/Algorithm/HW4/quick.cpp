#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> *target, int p, int r) {
  int tmp = (*target)[p];
  (*target)[p] = (*target)[r];
  (*target)[r] = tmp;
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

int main() {
  vector<int> v;
  srand((unsigned)time(0));
  for (int i = 0; i < 10; i++) {
    int x = rand();
    cout << x << " ";
    v.push_back(x);
  }
  cout << endl;
  quickSort(&v, 0, v.size() - 1);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}