#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> *target, int p, int r) {
  int i = p;
  for (int j = p; j < r + 1; j++) {
    if ((*target)[j] < (*target)[r]) {
      int tmp = (*target)[j];
      (*target)[j] = (*target)[i];
      (*target)[i++] = tmp;
    }
  }
  int tmp = (*target)[i];
  (*target)[i] = (*target)[r];
  (*target)[r] = tmp;
  return i;
}

void quickSort(vector<int> *target, int p, int r) {
  if (p < r) {
    int q = partition(target, p, r);
    quickSort(target, p, q - 1); //그냥 q X, q-1!!!!!
    quickSort(target, q + 1, r);
  }
}

int main() {
  vector<int> target = {35, 72, 68, 56, 27, 84};
  quickSort(&target, 0, target.size() - 1);
  for (auto i = target.begin(); i < target.end(); i++)
    printf("%d ", *i);
}