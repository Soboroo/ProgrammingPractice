#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const char *file = "c:\\windows\\system.ini";

  ifstream fin(file);
  if (!fin) {
    cout << file << "열기 오류" << endl;
    return 0;
  }
  int count = 0;
  int c;
  while ((c = fin.get()) != EOF) {
    cout << (char)c;
    count += 1 + (c == '\n');
  }
  cout << "읽은 바이트 수는 " << count << endl;
  fin.close();
}