#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> *target, int k, int n) {
  int left = 2 * k;
  int right = 2 * k + 1;
  int smaller;

  if (right <= n) {
    if ((*target)[left] < (*target)[right])
      smaller = left;
    else
      smaller = right;
  } else if (left <= n)
    smaller = left;
  else
    return;

  if ((*target)[smaller] < (*target)[k]) {
    int tmp = (*target)[k];
    (*target)[k] = (*target)[smaller];
    (*target)[smaller] = tmp;
    heapify(target, smaller, n);
  }
}

void buildHeap(vector<int> *target, int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(target, i, n);
}

void heapSort(vector<int> *target, int n) {
  buildHeap(target, n);
  for (int i = n - 1; i >= 2; i--) {
    int tmp = (*target)[0];
    (*target)[0] = (*target)[i];
    (*target)[i] = tmp;
    heapify(target, 0, n);
  }
}