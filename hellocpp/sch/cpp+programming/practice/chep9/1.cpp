#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
  double ratio;
  virtual double convert(double src) = 0;
  virtual string getSourceString() = 0;
  virtual string getDestString() = 0;

public:
  Converter() {}
  Converter(double ratio) { this->ratio = ratio; }
  void run() {
    double src;
    cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
    cout << getSourceString() << "을 입력하세요>> ";
    cin >> src;
    cout << "변환 결과 : " << convert(src) << getDestString() << endl;
  }
};

class WonToDollor : public Converter {
public:
  WonToDollor(int ratio) { this->ratio = ratio; }
  double convert(double src) { return src / ratio; }
  string getSourceString() { return "원"; }
  string getDestString() { return "달러"; }
};

int main() {
  WonToDollor wd(1010);
  wd.run();
}