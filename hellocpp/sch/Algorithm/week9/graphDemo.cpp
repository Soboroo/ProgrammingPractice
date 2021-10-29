#include <iostream>
#define MAX_VERTEX_NUM 100
using namespace std;

class Graph {
  int vertexNum;
  int adjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

public:
  Graph(int vNum) { vertexNum = vNum; }
  void AddEdge(int start, int end) {
    adjMatrix[start][end] = 1;
    adjMatrix[end][start] = 1;
  }
  void show(int x, int y) { cout << adjMatrix[x][y] << " "; }
};

int main() {
  Graph NewGraph(6);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    for (int j = 0; i < num; j++) {
      int end;
      cin >> end;
      NewGraph.AddEdge(num, end);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      NewGraph.show(i, j);
    }
    cout << endl;
  }
}