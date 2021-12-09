#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  fin.open(
      "C:\\Users\\woo73\\OneDrive\\Desktop\\ProgrammingPractice\\hellocpp\\sc"
      "h\\cpp+programming\\week14\\student.txt");
  if (!fin) {
    cout << "파일을 열 수 없다";
    return 0;
  }
  char name[10], dept[20];
  int sid;

  fin >> name;
  fin >> sid;
  fin >> dept;

  cout << name << endl;
  cout << sid << endl;
  cout << dept << endl;

  fin.close();
}