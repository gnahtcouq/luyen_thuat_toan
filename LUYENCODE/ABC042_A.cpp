#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a[3], n = 3;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);

  if (a[0] == 5 && a[1] == 5 && a[2] == 7)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
