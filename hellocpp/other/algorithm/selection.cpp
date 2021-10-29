#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> target = {35, 72, 68, 56, 27, 84};

  for (int i = 0; i < target.size(); i++) {
    int min = target[i], idx = i;
    for (int j = i + 1; j < target.size(); j++) {
      if (min > target[j]) {
        min = target[j];
        idx = j;
      }
    }
    int tmp = target[idx];
    target[idx] = target[i];
    target[i] = tmp;
  }
  for (auto i = target.begin(); i < target.end(); i++)
    printf("%d ", *i);
}