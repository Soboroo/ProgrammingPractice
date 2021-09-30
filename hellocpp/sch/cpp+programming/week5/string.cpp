#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  string address("Yeet");
  string copyAddress(address);

  char text[] = {'L', 'o', 'v', 'e', ' ', 'P', 'y', 't', 'h', 'o', 'n', '\0'};
  string title(text);
  cout << str << endl;
  cout << address << endl;
  cout << copyAddress << endl;
  cout << title << endl;
}