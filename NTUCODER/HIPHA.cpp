#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int pos = 0;
  while (n--) {
    int k;
    cin >> k;
    if (k == 1)
      pos += 1;
    else
      pos -= 1;
  }

  cout << abs(pos);

  return 0;
}