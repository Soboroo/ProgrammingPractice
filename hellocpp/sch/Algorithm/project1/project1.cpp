#include <fstream>
#include <iostream>
using namespace std;

int n, *weight = NULL;
int countTeams(int h, int wA, int wB, int wC) {
  int result = 0;
  if (n == h)
    return wA == wB && wB == wC;
  for (int i = 0; i < 4; i++)
    result += countTeams(h + 1, wA + (i == 1 ? weight[h] : 0),
                         wB + (i == 2 ? weight[h] : 0),
                         wC + (i == 3 ? weight[h] : 0));
  return result;
}

int main() {
  ifstream fin("input.txt");

  int a;
  fin >> a;
  for (int i = 0; i < a; i++) {
    fin >> n;
    weight = new int[n];
    for (int j = 0; j < n; j++)
      fin >> weight[j];
    cout << countTeams(-1, 0, 0, 0) << endl;
    delete[] weight;
  }
}