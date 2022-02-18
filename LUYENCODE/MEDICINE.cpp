#include <iostream>
#include <string>
using namespace std;

int demPhanBiet(string s) {
  int dem = 0, n = s.length();
  for (int i = 0; i < n; i++) {
    int check = 1; // true
    // tu vi tri i se lui ve cac vi tri truoc de de xet
    for (int j = i - 1; j >= 0; j--) {
      if (s[i] == s[j]) {
        // da bi trung
        check = 0; // false
        break;
      }
    }
    if (check == 1)
      dem++;
  }
  return dem;
}

int main() {
  string s;
  cin >> s;
  cout << demPhanBiet(s);

  return 0;
}