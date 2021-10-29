#include <iostream>
using namespace std;

class Rect;

// weapping class
class RectManager { // Tool to handling Data type
public:
  bool equals(Rect r, Rect s);
  void copy(Rect &dest, Rect &srd);
};

class Rect { // Data type
  int width, height;

public:
  Rect(int width, int height) {
    this->width = width;
    this->height = height;
  }
  friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
  if (r.width == s.width && r.height == s.height)
    return true;
  else
    return false;
}

void RectManager::copy(Rect &dest, Rect &std) {
  dest.width = std.width;
  dest.height = std.height;
}

int main() {
  Rect a(3, 4), b(3, 4);
  RectManager man;

  man.copy(b, a);
  if (man.equals(a, b))
    cout << "equal" << endl;
  else
    cout << "not equsl" << endl;
}