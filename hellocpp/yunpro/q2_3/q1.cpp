#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2);

int main()
{
	Point *pos = new Point[2];
	cout << "First Position: " << endl;
	cin >> pos[0].xpos >> pos[0].ypos;
	cout << "Second Position: " << endl;
	cin >> pos[1].xpos >> pos[1].ypos;

	Point &ref = PntAdder(pos[0], pos[1]);
	cout << "Result: (" << ref.xpos << ", " << ref.ypos << ")" << endl;
	delete[] pos;

	return 0;
}

Point &PntAdder(const Point &p1, const Point &p2)
{
	Point *a = new Point;
	a->xpos = p1.xpos + p2.xpos;
	a->ypos = p1.ypos + p2.ypos;
	return *a;
}