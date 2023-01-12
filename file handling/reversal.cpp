#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream f1("normal.txt", ios::out | ios::trunc);
  string h;
  char ch;
  getline(cin, h);
  f1 << h;
  f1.close();
  f1.open("normal.txt", ios::in);
  f1.seekg(0, ios::end);
  int k = f1.tellg();
  fstream f2("reverse.txt", ios::in | ios::out | ios::trunc);
  for (int i = 1; i <= k; i++) {
    f1.seekg(-i, ios::end);
    f1.get(ch);
    f2 << ch;
  }
  return 0;
}