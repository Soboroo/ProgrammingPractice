#include <fstream>
#include <iostream>
using namespace std;

void showStreamState(ios &stream) {
  cout << "eof() " << stream.eof() << endl;
  cout << "fail() " << stream.fail() << endl;
  cout << "bad() " << stream.bad() << endl;
  cout << "good() " << stream.good() << endl;
}

int main() {
  const char *noExistFile = "bruh.bruh";
  const char *existFile =
      "C:\\Users\\woo73\\OneDrive\\Desktop\\ProgrammingPractice\\helloc"
      "pp\\sch\\cpp+programming\\week14\\student.txt";

  ifstream fin(noExistFile);
  if (!fin) {
    cout << noExistFile << " 열기 오류" << endl;
    showStreamState(fin);

    cout << existFile << " 파일 열기" << endl;
    fin.open(existFile);
    showStreamState(fin);
  }

  int c;
  while ((c = fin.get()) != EOF)
    cout.put((char)c);

  cout << endl;
  showStreamState(fin);

  fin.close();
}