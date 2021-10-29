#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> *target, int p, int q, int r) {
  vector<int> tmp(r - p + 1);
  int idx1 = p;
  int idx2 = q + 1;
  for (int i = 0; i <= r - p; i++) {
    if (idx1 == q + 1)
      tmp[i] = (*target)[idx2++];
    else if (idx2 == r + 1)
      tmp[i] = (*target)[idx1++];
    else
      tmp[i] = (*target)[idx1] < (*target)[idx2] ? (*target)[idx1++]
                                                 : (*target)[idx2++];
  }
  for (int i = p; i <= r; i++)
    (*target)[i] = tmp[i - p];
}

void mergeSort(vector<int> *target, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    mergeSort(target, p, q);
    mergeSort(target, q + 1, r);
    merge(target, p, q, r);
  }
}

int main() {
  vector<int> target = {35, 72, 68, 56, 27, 84};
  mergeSort(&target, 0, target.size() - 1);
  for (auto i = target.begin(); i < target.end(); i++)
    printf("%d ", *i);
}