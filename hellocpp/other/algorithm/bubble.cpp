#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> target = {35, 72, 68, 56, 27, 84};
  for (int i = target.size() - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (target[j] > target[j + 1]) {
        int tmp = target[j];
        target[j] = target[j + 1];
        target[j + 1] = tmp;
      }
    }
  }
  for (auto i = target.begin(); i < target.end(); i++)
    printf("%d ", *i);
}