#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
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
class Car;
class Maze {
  Grid grid[5][5];

public:
  Maze();
  void showMaze();
  friend Car;
};

Maze::Maze() {
  srand((unsigned)time(0));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      grid[i][j].setVaild(true);
      grid[i][j].setDest(false);
      grid[i][j].setStart(false);
      grid[i][j].setX(i);
      grid[i][j].setY(j);
    }
  }
  grid[0][0].setStart(true);
  grid[4][4].setDest(true);

  for (int i = 1; i < 4; i++) {
    grid[i][rand() % 5].setVaild(false);
  }
}

void Maze::showMaze() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (grid[i][j].isStart())
        cout << "S";
      else if (grid[i][j].isDest())
        cout << "D";
      else
        cout << (grid[i][j].isVaild() ? "O" : "X");
    }
    cout << endl;
  }
}

class Car {
protected:
  int x = 0, y = 0;

public:
  virtual void move() = 0;
  void setX(int val) { this->x = val; }
  void setY(int val) { this->y = val; }
  int getX() { return this->x; }
  int getY() { return this->y; }
  bool fall(Maze *p) {
    if (p->grid[this->x][this->y].isVaild())
      return false;
    else {
      setX(0);
      setY(0);
      return true;
    }
  }
};

class UAV : public Car {
  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {-1, 1, 0, 0};

public:
  UAV() { srand(time(NULL)); }
  void move() {
    int tmp = rand() % 4;
    x += dx[tmp];
    y += dy[tmp];
  }
};

int main() {
  cout << "20201517 우영윤" << endl;
  Maze maze;
  maze.showMaze();
  UAV uav;
  vector<Grid> route;
  while (uav.getX() != 4 || uav.getY() != 4) {
    uav.move();
    if (uav.fall(&maze)) {
      route.clear();
    } else {
      Grid trace;
      trace.setX(uav.getX());
      trace.setY(uav.getY());
      route.push_back(trace);
    }
  }
  for (int i = 0; i < route.size(); i++) {
    cout << "(" << route[i].getx() << ", " << route[i].gety() << ")->";
  }
  cout << "END" << endl;

  return 0;
}