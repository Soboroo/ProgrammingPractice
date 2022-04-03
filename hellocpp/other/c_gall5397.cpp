#include <iostream>
using namespace std;

int main() {
  int h = 0;
  int r = 0;
  int ht = 0;
  int rt = 0;
  while (true) {
    cout << "행렬A의 크기 입력:";
    cin >> h >> r;
    int **p = new int *[h] { 0 };
    for (int i = 0; i < h; i++) {
      p[i] = new int[r]{0};
    }
    cout << "행렬B의 크기 입력:";
    cin >> ht >> rt;
    int **pt = new int *[ht] { 0 };
    for (int i = 0; i < ht; i++) {
      pt[i] = new int[rt]{0};
    }
    if (r != ht)
      break;
    cout << "행렬A 입력" << endl;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < r; j++) {
        cin >> p[i][j];
        cout << endl;
      }
    }
    cout << endl;
    cout << "행렬B 입력" << endl;
    for (int i = 0; i < ht; i++) {
      for (int j = 0; j < rt; j++) {
        cin >> pt[i][j];
        cout << endl;
      }
    }
    cout << endl;
    int **c = new int *[h] { 0 };
    for (int i = 0; i < h; i++) {
      c[i] = new int[rt]{0};
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < rt; j++) {
        for (int k = 0; k < r; k++) {
          c[i][j] += p[i][k] * pt[k][j];
        }
      }
    }
    cout << "행렬 곱셈 결과" << endl;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < rt; j++) {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    delete[] p;
    delete[] pt;
    delete[] c;
  }
}