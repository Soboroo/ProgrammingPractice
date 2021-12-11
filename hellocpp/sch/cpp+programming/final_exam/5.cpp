#include <iostream>
#include <vector>
using namespace std;

template <class T1, class T2>
vector<double> complementryArrays(T1 arr1[], T2 arr2[], int len1, int len2) {
  vector<double> newArray;
  for (int i = 0; i < len1; i++) {
    bool flag = false;
    for (int j = 0; j < len2; j++) {
      if (arr1[i] / 1.0 == arr2[j] / 1.0)
        flag = true;
    }
    if (!flag)
      newArray.push_back(arr1[i] / 1.0);
  }
  for (int i = 0; i < len2; i++) {
    bool flag = false;
    for (int j = 0; j < len1; j++) {
      if (arr2[i] / 1.0 == arr1[j] / 1.0)
        flag = true;
    }
    if (!flag)
      newArray.push_back(arr2[i] / 1.0);
  }
  return newArray;
}

int main() {
  cout << "20201517 우영윤\n";
  int x[] = {1, 10, 100, 5, 4};
  double y[] = {1.0, 10.0, 5.0};
  vector<double> vcomp = complementryArrays(x, y, 5, 3);
  for (int i = 0; i < vcomp.size(); i++)
    cout << vcomp[i] << " ";
  cout << endl;
}