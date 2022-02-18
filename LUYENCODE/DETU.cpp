#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int dem;
  if (s[0] == '.')
    dem = 0;
  else
    dem = 1;
  int length = s.length();
  for (int i = 0; i < length - 1; i++)
    if (s[i] == '.' && s[i + 1] != '.')
      dem++;

  cout << dem;

  return 0;
}