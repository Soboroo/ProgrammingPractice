#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "20201517 우영윤\n";

  const char *file = "c:\\windows\\system.ini";

  ifstream fin1(file);
  if (!fin1) {
    cout << file << " 열기 오류" << endl;
    return 0;
  }
  char buf[BUFSIZ];
  int count = 0;
  while (fin1.getline(buf, BUFSIZ)) {
    count++;
  }
  int digit = to_string(count).size();
  fin1.close();

  ifstream fin2(file);
  if (!fin2) {
    cout << file << " 열기 오류" << endl;
    return 0;
  }
  int index = 1;
  while (fin2.getline(buf, BUFSIZ)) {
    for (int i = 0; i < digit - to_string(index).size(); i++)
      cout << 0;
    cout << index++ << ": " << buf << endl;
  }

  fin2.close();
}