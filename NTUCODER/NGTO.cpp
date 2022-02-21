#include <iostream>
#include <math.h>
using namespace std;

long long kiemtraSNT(long long n) {
  if (n < 2)
    return 0; // Khong thoa
  else if (n > 2) {
    if (n % 2 == 0)
      return 0; // Khong thoa
    for (long long i = 3; i <= (long long)sqrt((double)n); i += 2) {
      if (n % i == 0)
        return 0; // Khong thoa
    }
  }
  return 1; // Thoa
}

int main() {
  long long n;
  cin >> n;
  if (kiemtraSNT(n))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}