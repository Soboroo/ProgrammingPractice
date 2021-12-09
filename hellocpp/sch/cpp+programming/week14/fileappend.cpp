#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const char *firstFile =
      "C:"
      "\\Users\\woo73\\OneDrive\\Desktop\\ProgrammingPractice\\hellocpp\\sch\\c"
      "pp+programming\\week14\\student.txt";
  const char *secondFile = "c:\\windows\\system.ini";

  fstream fout(firstFile, ios::out | ios::app);
  if (!fout) {
    cout << firstFile << " 열기 오류";
    return 0;
  }
  fstream fin(secondFile, ios::in);
  if (!fin) {
    cout << secondFile << " 열기 오류";
    return 0;
  }
  int c;
  while ((c = fin.get()) != EOF) {
    fout.put(c);
  }
  fin.close();
  fout.close();
}