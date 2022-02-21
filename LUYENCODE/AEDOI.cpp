#include <iostream>
#include <math.h>
using namespace std;

long long kiemTra(long long n) {
  long long s = 0;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      s += i;
      if (i != n / i)
        s += (n / i);
    }
  }
  return s - n;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long a, b;
  cin >> a >> b;
  if (kiemTra(a) == b || kiemTra(b) == a)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}