#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int length = s.length();
  for (int i = 0; i < length; ++i)
    if (s[i] == ',')
      s[i] = ' ';
  cout << s;

  return 0;
}