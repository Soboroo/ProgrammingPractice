#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const char *srcFile = "C:"
                        "\\Users\\woo73\\OneDrive\\Desktop\\ProgrammingPractice"
                        "\\hellocpp\\sch\\cpp+"
                        "programming\\week14\\tulips.jpg";

  const char *destFile =
      "C:\\Users\\woo73\\OneDrive\\Desktop\\ProgrammingPractice\\tulips.jpg";

  ifstream fsrc(srcFile, ios::in | ios::binary);
  if (!fsrc) {
    cout << srcFile << " 열기 오류" << endl;
    return 0;
  }

  ofstream fdest(destFile, ios::out | ios::binary);
  if (!fdest) {
    cout << destFile << " 열기 오류" << endl;
    return 0;
  }

  char buf[1024];
  while (!fsrc.eof()) {
    fsrc.read(buf, 1024);
    int n = fsrc.gcount();
    fdest.write(buf, n);
  }
  cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
  fsrc.close();
  fdest.close();
}