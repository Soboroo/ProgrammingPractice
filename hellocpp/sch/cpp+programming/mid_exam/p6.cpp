#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Grid {
  bool bVaild = false;
  bool bStart = false;
  bool bDest = false;
  int x;
  int y;

public:
  bool isVaild() { return bVaild; }
  bool isStart() { return bStart; }
  bool isDest() { return bDest; }
  void setVaild(bool val) { bVaild = val; }
  void setStart(bool val) { bStart = val; }
  void setDest(bool val) { bDest = val; }
  void setX(int val) { x = val; }
  void setY(int val) { y = val; }
  int getx() { return x; }
  int gety() { return y; }
};

class Maze {
  Grid maze[5][5];

public:
  Maze();
  void showMaze();
};

Maze::Maze() {
  srand((unsigned)time(0));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      maze[i][j].setVaild(true);
      maze[i][j].setDest(false);
      maze[i][j].setStart(false);
      maze[i][j].setX(i);
      maze[i][j].setY(j);
    }
  }
  maze[0][0].setStart(true);
  maze[4][4].setDest(true);

  for (int i = 1; i < 4; i++) {
    maze[i][rand() % 5].setVaild(false);
  }
}

void Maze::showMaze() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (maze[i][j].isStart())
        cout << "S";
      else if (maze[i][j].isDest())
        cout << "D";
      else
        cout << (maze[i][j].isVaild() ? "O" : "X");
    }
    cout << endl;
  }
}

int main() {
  cout << "20201517 우영윤" << endl;
  Maze mymaze;
  mymaze.showMaze();
}